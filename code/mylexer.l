/* start conditions */
%{
	#include <stdio.h>

	int lineNum = 1;
%}


/***********************/
/***** definitions *****/
/***********************/

/***** keywords *****/
KEYWORD_INT		"int"
KEYWORD_REAL	"real"
KEYWORD_BOOL	"bool"
KEYWORD_STRING	"string"
KEYWORD_IF		"if"
KEYWORD_ELSE	"else"
KEYWORD_FI		"fi"
KEYWORD_WHILE	"while"
KEYWORD_LOOP	"loop"
KEYWORD_POOL	"pool"
KEYWORD_CONST	"const"
KEYWORD_LET		"let"
KEYWORD_BREAK	"break"
KEYWORD_RETURN	"return"
KEYWORD_START	"start"


/***** operators *****/
/* arithmetic */
ADD_OP				"+"
SUBTRACT_OP			"-"
MULTIPLY_OP		"*"
DIVIDE_OP			"/"
/* ???????????????? */
MOD_OP				"%"
/* relational */
EQUAL_OP			"="
DIFFERENT_OP		"!="
LESS_OP				"<"
EQUAL_LESS_OP		"<="
/* logical */
AND_OP				"and"
OR_OP				"or"
NOT_OP				"not"
/* sign */
/* ???????????????? */
POSITIVE_OP			"+"
NEGATIVE_OP			"-"
/* delimeters */
ASSIGN_OP			"<-"
COLON				":"
SEMICOLON			";"
COMMA				","
LEFT_PARENTHESIS	"("
RIGHT_PARENTHESIS	")"
LEFT_BRACKET		"["
RIGHT_BRACKET		"]"
LEFT_CURLY_BRACKET	"{"
RIGHT_CURLY_BRACKET	"}"

ARROW_OP			"=>"


/* ids */
IDENTIFIER			[a-zA-Z][0-9a-zA-Z_]*

/* values */
POS_INT				([0])|([1-9][0-9]*)
POS_REAL			{POS_INT}"."[0-9]+([eE][-+]?[1-9][0-9]*)?
BOOLEAN				"true"|"false"

/* string */
CONST_STRING		"\"".+"\""

/***** comments *****/
LINE_COMM	"--"



%%
	/*********************/
	/******* rules *******/
	/*********************/

	/* TO_DO na bgalw ta lines */
	/* TO_DO isws prepei na feigoun ta \" */

	/* mono ean akolou8ountai apo eidikous xarakthres */ 
	/***** keywords *****/
{KEYWORD_INT}											{ printf("Line %d: Token KEYWORD_INT:              %s\n", lineNum, yytext); }
{KEYWORD_REAL}											{ printf("Line %d: Token KEYWORD_REAL:             %s\n", lineNum, yytext); }
{KEYWORD_BOOL}											{ printf("Line %d: Token KEYWORD_BOOL:             %s\n", lineNum, yytext); }
{KEYWORD_STRING}										{ printf("Line %d: Token KEYWORD_STRING:           %s\n", lineNum, yytext); }
{KEYWORD_IF}											{ printf("Line %d: Token KEYWORD_IF:               %s\n", lineNum, yytext); }
{KEYWORD_ELSE}											{ printf("Line %d: Token KEYWORD_ELSE:             %s\n", lineNum, yytext); }
{KEYWORD_FI}											{ printf("Line %d: Token KEYWORD_FI:               %s\n", lineNum, yytext); }
{KEYWORD_WHILE}											{ printf("Line %d: Token KEYWORD_WHILE:            %s\n", lineNum, yytext); }
{KEYWORD_LOOP}											{ printf("Line %d: Token KEYWORD_LOOP:             %s\n", lineNum, yytext); }
{KEYWORD_POOL}											{ printf("Line %d: Token KEYWORD_POOL:             %s\n", lineNum, yytext); }
{KEYWORD_CONST}											{ printf("Line %d: Token KEYWORD_CONST:            %s\n", lineNum, yytext); }
{KEYWORD_LET}											{ printf("Line %d: Token KEYWORD_LET:              %s\n", lineNum, yytext); }
{KEYWORD_BREAK}											{ printf("Line %d: Token KEYWORD_BREAK:            %s\n", lineNum, yytext); }
{KEYWORD_RETURN}										{ printf("Line %d: Token KEYWORD_RETURN:           %s\n", lineNum, yytext); }
{KEYWORD_START}											{ printf("Line %d: Token KEYWORD_START:            %s\n", lineNum, yytext); }

	/***** operators *****/
	/* arithmetic */
{ADD_OP}												{ printf("Line %d: Token ADD_OP:                   %s\n", lineNum, yytext); }
{SUBTRACT_OP}											{ printf("Line %d: Token SUBTRACT_OP:              %s\n", lineNum, yytext); }
{MULTIPLY_OP}											{ printf("Line %d: Token MULTIPLY_OP:              %s\n", lineNum, yytext); }
{DIVIDE_OP}												{ printf("Line %d: Token DIVIDE_OP:                %s\n", lineNum, yytext); }
	/* ???????????????? */
{MOD_OP}												{ printf("Line %d: Token MOD_OP:                   %s\n", lineNum, yytext); }
	/* relational */
{EQUAL_OP}												{ printf("Line %d: Token EQUAL_OP:                 %s\n", lineNum, yytext); }
{DIFFERENT_OP}											{ printf("Line %d: Token DIFFERENT_OP:             %s\n", lineNum, yytext); }
{LESS_OP}												{ printf("Line %d: Token LESS_OP:                  %s\n", lineNum, yytext); }
{EQUAL_LESS_OP}											{ printf("Line %d: Token EQUAL_LESS_OP:            %s\n", lineNum, yytext); }
	/* logical */
{AND_OP}												{ printf("Line %d: Token AND_OP:                   %s\n", lineNum, yytext); }
{OR_OP}													{ printf("Line %d: Token OR_OP:                    %s\n", lineNum, yytext); }
{NOT_OP}												{ printf("Line %d: Token NOT_OP:                   %s\n", lineNum, yytext); }
	/* sign */
	/* ???????????????????????????????????????????????????????????????? */
{POSITIVE_OP}/({POS_INT}|{POS_REAL}|{IDENTIFIER})		{ printf("Line %d: Token POSITIVE_OP:              %s\n", lineNum, yytext); }
{NEGATIVE_OP}/({POS_INT}|{POS_REAL}|{IDENTIFIER})		{ printf("Line %d: Token NEGATIVE_OP:              %s\n", lineNum, yytext); }
	/* delimeters */
{ASSIGN_OP}												{ printf("Line %d: Token ASSIGN_OP:                %s\n", lineNum, yytext); }
{COLON}													{ printf("Line %d: Token COLON:                    %s\n", lineNum, yytext); }
{SEMICOLON}												{ printf("Line %d: Token SEMICOLON:                %s\n", lineNum, yytext); }
{COMMA}													{ printf("Line %d: Token COMMA:                    %s\n", lineNum, yytext); }
{LEFT_PARENTHESIS}										{ printf("Line %d: Token LEFT_PARENTHESIS:         %s\n", lineNum, yytext); }
{RIGHT_PARENTHESIS}										{ printf("Line %d: Token RIGHT_PARENTHESIS:        %s\n", lineNum, yytext); }
{LEFT_BRACKET}											{ printf("Line %d: Token LEFT_BRACKET:             %s\n", lineNum, yytext); }
{RIGHT_BRACKET}											{ printf("Line %d: Token RIGHT_BRACKET:            %s\n", lineNum, yytext); }
{LEFT_CURLY_BRACKET}									{ printf("Line %d: Token LEFT_CURLY_BRACKET:       %s\n", lineNum, yytext); }
{RIGHT_CURLY_BRACKET}									{ printf("Line %d: Token RIGHT_CURLY_BRACKET:      %s\n", lineNum, yytext); }
	/* ???????????????? */
{ARROW_OP}												{ printf("Line %d: Token ARROW_OP:                 %s\n", lineNum, yytext); }

{POS_INT}												{ printf("Line %d: Token CONST_INT:                %s\n", lineNum, yytext); }
{POS_REAL}												{ printf("Line %d: Token CONST_REAL:               %s\n", lineNum, yytext); }
{BOOLEAN}												{ printf("Line %d: Token BOOLEAN:                  %s\n", lineNum, yytext); }

{IDENTIFIER}											{ printf("Line %d: Token IDENTIFIER:               %s\n", lineNum, yytext); }

{CONST_STRING}											{ printf("Line %d: Token CONST_STRING:             %s\n", lineNum, yytext); }

	/* TO_DO block comments */
{LINE_COMM}[^\n]* 										 printf("Line %d: line comment:                    %s\n", lineNum, yytext); /* eat line comments */

[ \r\t\\]+	/* skip whitespaces */

\n			++lineNum;

<<EOF>>	{
	printf("Line %d: EOF\n", lineNum);
	return EOF;
}

	/* error. + gia pollous xarakthres*/
	/*[^ \r\t\n\\\"]+			{ printf("Unrecognized Token %s in line %d: \n", yytext, lineNum); } /* TO-DO na deixnei olh thn grammh sto telos */


%%
/***********************/
/****** user code ******/
/***********************/

int main ()
{
	int token;
	while ( (token = yylex()) != EOF )
		printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}