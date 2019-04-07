/* start conditions */
%{
	#include <stdio.h>

	int lineNum = 1;
	int comment_start_line = 1;
	int syntax_correct = 1;
%}


/***********************/
/***** definitions *****/
/***********************/


/***** keywords *****/
KEYWORD_INT				"int"
KEYWORD_REAL			"real"
KEYWORD_BOOL			"bool"
KEYWORD_STRING			"string"
KEYWORD_IF				"if"
KEYWORD_ELSE			"else"
KEYWORD_FI				"fi"
KEYWORD_WHILE			"while"
KEYWORD_LOOP			"loop"
KEYWORD_POOL			"pool"
KEYWORD_CONST			"const"
KEYWORD_LET				"let"
KEYWORD_BREAK			"break"
KEYWORD_RETURN			"return"
KEYWORD_START			"start"


/***** operators *****/
/* arithmetic */
ADD_POS_OP				"+"
SUBTRACT_NEG_OP			"-"
MULTIPLY_OP				"*"
DIVIDE_OP				"/"
MODULOS_OP				"%"
/* relational */
EQUAL_OP				"="
DIFFERENT_OP			"!="
LESS_OP					"<"
EQUAL_LESS_OP			"<="
/* logical */
AND_OP					"and"
OR_OP					"or"
NOT_OP					"not"
/* delimeters */
ASSIGN_OP				"<-"
COLON					":"
SEMICOLON				";"
COMMA					","
LEFT_PARENTHESIS		"("
RIGHT_PARENTHESIS		")"
LEFT_BRACKET			"["
RIGHT_BRACKET			"]"
LEFT_CURLY_BRACKET		"{"
RIGHT_CURLY_BRACKET		"}"
/*  */
ARROW_OP				"=>"


/***** ids *****/
IDENTIFIER				[a-zA-Z][0-9a-zA-Z_]*


/***** values *****/
POS_INT					([0])|([1-9][0-9]*)
POS_REAL				{POS_INT}"."[0-9]+([eE][-+]?[1-9][0-9]*)?
BOOLEAN					"true"|"false"
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


%%
	/*********************/
	/******* rules *******/
	/*********************/

	/* TO_DO na bgalw ta lines */

	/***** keywords *****/
{KEYWORD_INT}									{ printf("Line %3d: Token KEYWORD_INT:              %s\n", lineNum, yytext); }
{KEYWORD_REAL}									{ printf("Line %3d: Token KEYWORD_REAL:             %s\n", lineNum, yytext); }
{KEYWORD_BOOL}									{ printf("Line %3d: Token KEYWORD_BOOL:             %s\n", lineNum, yytext); }
{KEYWORD_STRING}								{ printf("Line %3d: Token KEYWORD_STRING:           %s\n", lineNum, yytext); }
{KEYWORD_IF}									{ printf("Line %3d: Token KEYWORD_IF:               %s\n", lineNum, yytext); }
{KEYWORD_ELSE}									{ printf("Line %3d: Token KEYWORD_ELSE:             %s\n", lineNum, yytext); }
{KEYWORD_FI}									{ printf("Line %3d: Token KEYWORD_FI:               %s\n", lineNum, yytext); }
{KEYWORD_WHILE}									{ printf("Line %3d: Token KEYWORD_WHILE:            %s\n", lineNum, yytext); }
{KEYWORD_LOOP}									{ printf("Line %3d: Token KEYWORD_LOOP:             %s\n", lineNum, yytext); }
{KEYWORD_POOL}									{ printf("Line %3d: Token KEYWORD_POOL:             %s\n", lineNum, yytext); }
{KEYWORD_CONST}									{ printf("Line %3d: Token KEYWORD_CONST:            %s\n", lineNum, yytext); }
{KEYWORD_LET}									{ printf("Line %3d: Token KEYWORD_LET:              %s\n", lineNum, yytext); }
{KEYWORD_BREAK}									{ printf("Line %3d: Token KEYWORD_BREAK:            %s\n", lineNum, yytext); }
{KEYWORD_RETURN}								{ printf("Line %3d: Token KEYWORD_RETURN:           %s\n", lineNum, yytext); }
{KEYWORD_START}									{ printf("Line %3d: Token KEYWORD_START:            %s\n", lineNum, yytext); }


	/***** operators *****/
	/* arithmetic */
{ADD_POS_OP}									{ printf("Line %3d: Token ADD_POS_OP:               %s\n", lineNum, yytext); }
{SUBTRACT_NEG_OP}								{ printf("Line %3d: Token SUBTRACT_NEG_OP:          %s\n", lineNum, yytext); }
{MULTIPLY_OP}									{ printf("Line %3d: Token MULTIPLY_OP:              %s\n", lineNum, yytext); }
{DIVIDE_OP}										{ printf("Line %3d: Token DIVIDE_OP:                %s\n", lineNum, yytext); }
{MODULOS_OP}									{ printf("Line %3d: Token MOD_OP:                   %s\n", lineNum, yytext); }
	/* relational */
{EQUAL_OP}										{ printf("Line %3d: Token EQUAL_OP:                 %s\n", lineNum, yytext); }
{DIFFERENT_OP}									{ printf("Line %3d: Token DIFFERENT_OP:             %s\n", lineNum, yytext); }
{LESS_OP}										{ printf("Line %3d: Token LESS_OP:                  %s\n", lineNum, yytext); }
{EQUAL_LESS_OP}									{ printf("Line %3d: Token EQUAL_LESS_OP:            %s\n", lineNum, yytext); }
	/* logical */
{AND_OP}										{ printf("Line %3d: Token AND_OP:                   %s\n", lineNum, yytext); }
{OR_OP}											{ printf("Line %3d: Token OR_OP:                    %s\n", lineNum, yytext); }
{NOT_OP}										{ printf("Line %3d: Token NOT_OP:                   %s\n", lineNum, yytext); }
	/* delimeters */
{ASSIGN_OP}										{ printf("Line %3d: Token ASSIGN_OP:                %s\n", lineNum, yytext); }
{COLON}											{ printf("Line %3d: Token COLON:                    %s\n", lineNum, yytext); }
{SEMICOLON}										{ printf("Line %3d: Token SEMICOLON:                %s\n", lineNum, yytext); }
{COMMA}											{ printf("Line %3d: Token COMMA:                    %s\n", lineNum, yytext); }
{LEFT_PARENTHESIS}								{ printf("Line %3d: Token LEFT_PARENTHESIS:         %s\n", lineNum, yytext); }
{RIGHT_PARENTHESIS}								{ printf("Line %3d: Token RIGHT_PARENTHESIS:        %s\n", lineNum, yytext); }
{LEFT_BRACKET}									{ printf("Line %3d: Token LEFT_BRACKET:             %s\n", lineNum, yytext); }
{RIGHT_BRACKET}									{ printf("Line %3d: Token RIGHT_BRACKET:            %s\n", lineNum, yytext); }
{LEFT_CURLY_BRACKET}							{ printf("Line %3d: Token LEFT_CURLY_BRACKET:       %s\n", lineNum, yytext); }
{RIGHT_CURLY_BRACKET}							{ printf("Line %3d: Token RIGHT_CURLY_BRACKET:      %s\n", lineNum, yytext); }
	/* ???????????????? */
{ARROW_OP}										{ printf("Line %3d: Token ARROW_OP:                 %s\n", lineNum, yytext); }


	/***** values *****/
	/* legal formats */
{POS_INT}										{ printf("Line %3d: Token CONST_INT:                %s\n", lineNum, yytext); }
{POS_REAL}										{ printf("Line %3d: Token CONST_REAL:               %s\n", lineNum, yytext); }
{BOOLEAN}										{ printf("Line %3d: Token BOOLEAN:                  %s\n", lineNum, yytext); }
	/* illegal formats */
{ILLEGAL_FORMAT_INT}							{ printf("\nSyntax error in Line %3d:                  %s\n(Wrong integer format)\n\n", lineNum, yytext); syntax_correct = 0; }
{ILLEGAL_FORMAT_REAL}							{ printf("\nSyntax error in Line %3d:                  %s\n(Wrong real format)\n\n", lineNum, yytext); syntax_correct = 0; }


	/***** ids *****/
{IDENTIFIER}									{ printf("Line %3d: Token IDENTIFIER:               %s\n", lineNum, yytext); }


	/***** strings *****/
{STRING_OP}										{ BEGIN(const_string); yymore(); }
<const_string>"\\"+"\""*						{ yymore(); }	/* eats " leaded by \ */
<const_string>{STRING_OP}						{ printf("Line %3d: CONST_STRING:                   %s\n", lineNum, yytext); BEGIN(INITIAL); }
<const_string>[^\"\n\\]*						{ yymore(); }
<const_string>\n								{ 
		printf("\nSyntax error in Line %3d:                %sUnclosed string (expected \")\n\n", lineNum, yytext);
		lineNum++;
		syntax_correct = 0;
		BEGIN(INITIAL);
		}
<const_string><<EOF>>							{
		printf("\nSyntax error in Line %3d:                %sUnclosed string (expected \")\n\n", lineNum, yytext);
		syntax_correct = 0;
		BEGIN(INITIAL);
		return EOF;
	}


	/***** comments *****/
	/* adespoto telos sxoliou */
{COMMENT_END}									{ printf("\nSyntax error in line %3d:                  %s\n(comment doesn't start)\n\n", lineNum, yytext); syntax_correct = 0; }

{LINE_COMM}.* 									{ printf("Line %3d: line comment:                   %s\n", lineNum, yytext); }
{COMMENT_START}									{ BEGIN(comment); printf("Line %3d: block comment started\n", lineNum); comment_start_line = lineNum; }
	/* fwliamsena sxolia */
<comment>{COMMENT_START}						{
		printf("\nSyntax error: Nested comments are not supported. Comment started in line: %d\n\n", comment_start_line);
		syntax_correct = 0;
		BEGIN(INITIAL);
	}
<comment>[^*\n]*								{  }
<comment>"*"+[^*)\n]*							{  }	/* eat up '*'s not followed by ')'s */
<comment>\n										{ ++lineNum; }
<comment>{COMMENT_END}							{ BEGIN(INITIAL); printf("Line %3d: block comment ended\n", lineNum); }
<comment><<EOF>>								{
		printf("\nSyntax error: Unclosed comment started in line %d\n(expected \"*)\")\n\n", comment_start_line);
		syntax_correct = 0;
		BEGIN(INITIAL);
		return EOF;
	}


	/***** whitespaces *****/
[ \r\t]+										

	/***** new line *****/
\n												++lineNum;

	/***** end of file *****/
<<EOF>>											{ return EOF; }

	/***** Unrecognized Token *****/
.												{ printf("Unrecognized Token %s in line %d\n", yytext, lineNum); syntax_correct = 0; }


%%
/***********************/
/****** user code ******/
/***********************/

int main ()
{
	int token;
	while ( (token = yylex()) != EOF ){}
	if ( syntax_correct == 1 )
		printf("Your program is syntactically correct!\n\n");
}