/* start conditions */
%{
	#include <assert.h>
	#include <stdio.h>
	#include <string.h>
	#include "myparser.tab.h"
	#include "cgen.h"

	int line_num = 1;
	int comment_start_line = 1;

	char *line_buffer;
%}


/***********************/
/***** definitions *****/
/***********************/


/***** keywords *****/
KW_INT					"int"
KW_REAL					"real"
KW_BOOL					"bool"
KW_STRING				"string"
KW_IF					"if"
KW_THEN					"then"
KW_ELSE					"else"
KW_FI					"fi"
KW_WHILE				"while"
KW_LOOP					"loop"
KW_POOL					"pool"
KW_CONST				"const"
KW_LET					"let"
KW_BREAK				"break"
KW_RETURN				"return"
KW_START				"start"


/***** operators *****/
/* relational */
DIFFERENT_OP			"!="
EQUAL_LESS_OP			"<="
/* logical */
AND_OP					"and"
OR_OP					"or"
NOT_OP					"not"
/* delimeters */
ASSIGN_OP				"<-"
/*  */
ARROW_OP				"=>"


/***** ids *****/
IDENTIFIER				[a-zA-Z][0-9a-zA-Z_]*


/***** values *****/
POS_INT					([0])|([1-9][0-9]*)
POS_REAL				{POS_INT}"."[0-9]+([eE][-+]?[1-9][0-9]*)?
KW_TRUE			"true"
KW_FALSE			"false"
/* starts with reduntant zero */
ILLEGAL_FORMAT_INT		[0][0-9]+
/* starts with reduntant zero | no int part | no decimal part | reduntant zero on exponential part | no exponential part */
ILLEGAL_FORMAT_REAL		({ILLEGAL_FORMAT_INT}|{POS_INT})?"."[0-9]*([eE][-+]?({ILLEGAL_FORMAT_INT}|{POS_INT})?)?


/***** string *****/
STRING_OP				"\""
%x const_string


/***** comments *****/
LINE_COMM				"--"
COMMENT_START			"(*"
COMMENT_END				"*)"
%x comment


/* Used to create the buffer for the first line */
%x start


%%
	/*********************/
	/******* rules *******/
	/*********************/


	/***** keywords *****/
{KW_INT}						return KW_INT;
{KW_REAL}						return KW_REAL;
{KW_BOOL}						return KW_BOOL;
{KW_STRING}						return KW_STRING;
{KW_IF}							return KW_IF;
{KW_THEN}						return KW_THEN;
{KW_ELSE}						return KW_ELSE;
{KW_FI}							return KW_FI;
{KW_WHILE}						return KW_WHILE;
{KW_LOOP}						return KW_LOOP;
{KW_POOL}						return KW_POOL;
{KW_CONST}						return KW_CONST;
{KW_LET}						return KW_LET;
{KW_BREAK}						return KW_BREAK;
{KW_RETURN}						return KW_RETURN;
{KW_START}						return KW_START;


	/***** operators *****/
	/* arithmetic */
"+"								return '+';
"-"								return '-';
"*"								return '*';
"/"								return '/';
"%"								return '%';
	/* relational */
"="								return '=';
{DIFFERENT_OP}					return DIFFERENT_OP;
"<"								return '<';
{EQUAL_LESS_OP}					return EQUAL_LESS_OP;
	/* logical */
{AND_OP}						return AND_OP;
{OR_OP}							return OR_OP;
{NOT_OP}						return NOT_OP;
	/* delimeters */
{ASSIGN_OP}						return ASSIGN_OP;
":"								return ':';
";"								return ';';
","								return ',';
"("								return '(';
")"								return ')';
"["								return '[';
"]"								return ']';
"{"								return '{';
"}"								return '}';
	/* ???????????????? */
{ARROW_OP}						return ARROW_OP;


	/***** values *****/
	/* legal formats */
{POS_INT}						{ yylval.crepr = strdup(yytext); return POS_INT; }
{POS_REAL}						{ yylval.crepr = strdup(yytext); return POS_REAL; }
{KW_TRUE}						return KW_TRUE;
{KW_FALSE}						return KW_FALSE;
	/* illegal formats */
{ILLEGAL_FORMAT_INT}			yyerror("\nLexical error: Illegal int format:         %s", yytext);
{ILLEGAL_FORMAT_REAL}			yyerror("\nLexical error: Illegal real format:        %s", yytext);


	/***** ids *****/
{IDENTIFIER}					{ yylval.crepr = strdup(yytext); return IDENTIFIER; }


	/***** strings *****/
{STRING_OP}						{ BEGIN(const_string); yymore(); }
<const_string>"\\"+"\""?		yymore();	/* eat \" and \ */
<const_string>{STRING_OP}		{ BEGIN(INITIAL); yylval.crepr = strdup(yytext); return STRING; }
<const_string>[^\"\n\\]*		yymore();	/* eat anything else */
<const_string>\n				{ 
									yyerror("\nLexical error: Unclosed string.\n(expected \" )");
									BEGIN(INITIAL);
									unput('\n');	/* rescan \n to buffer the next line */
								}
<const_string><<EOF>>			{
									yyerror("\nLexical error: Unclosed string.\n(expected \" )");
									BEGIN(INITIAL);
									return EOF;
								}


	/***** comments *****/
	/* adespoto telos sxoliou */
{COMMENT_END}					yyerror("\nLexical error: Comment doesn't start.\n(expected (* ))");

	/* Line comment */
{LINE_COMM}.*
{COMMENT_START}					{ BEGIN(comment); comment_start_line = line_num; }
	/* Comment end */
<comment>"*"+")"				BEGIN(INITIAL);
	/* Eat anything that's not a '*' */
<comment>[^(*\n]*
	/* Eat up '*'s not followed by ')'s */
<comment>"*"+[^*)\n]*
	/* New line */
<comment>\n.*					{
									line_buffer = strdup(yytext);	/* save the next line */
									yyless(1);						/* give back all but the \n to rescan */
									++line_num;
								}
	/* EOF in comment */
<comment><<EOF>>				{
									yyerror("\nSyntax error: Unclosed comment in line %d\n(expected *)");
									BEGIN(INITIAL);
									return EOF;
								}


	/***** whitespaces *****/
[ \r\t]+										


	/***** new line *****/
\n.*							{
									line_buffer = strdup(yytext);	/* save the next line */
									yyless(1);						/* give back all but the \n to rescan */
									++line_num;
								}


	/***** end of file *****/
<<EOF>>							return EOF;


	/***** Unrecognized Token *****/
.								yyerror("\nLexical error: Unrecognized Token:         %s", yytext);


	/* Creates the buffer for the first line. It is not used again */
<start>.*						{
									line_buffer = strdup(yytext);	/* save the next line */
									yyless(0);						/* give back all but the \n to rescan */
									BEGIN(INITIAL);
								}


%%
/***********************/
/****** user code ******/
/***********************/
/*
int main ()
{
	int token;

	BEGIN(start);
	while ( (token = yylex()) != EOF ){}

	if ( syntax_correct == 1 )
		printf("Your program is syntactically correct!\n\n");
}
*/