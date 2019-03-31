/* start conditions */
%{
	#include <stdio.h>

	int lineNum = 1;
%}


/* definitions */

KEYWORD		"int"|"real"|"bool"|"string"|"if"|"else"|"fi"|"while"|"loop"|"pool"|"const"|"let"|"break"|"return"|"not"|"and"|"or"|"start"
IDENTIFIER	[a-zA-Z][0-9a-zA-Z_]*

POS_INT		([0])|([1-9][0-9]*)
POS_REAL	{POS_INT}"."[0-9]+([eE][-+]?[1-9][0-9]*)?

BOOLEAN		"true"|"false"

%%
	/* rules */

	/* mono ean akolou8ountai apo eidikous xarakthres */
{KEYWORD}/[ \r\t\n\\\"]+	{ printf("Line %d: Found the KEYWORD %s\n", lineNum, yytext); }
{BOOLEAN}/[ \r\t\n\\\"]+	{ printf("Line %d: Found the BOOLEAN %s\n", lineNum, yytext); }

{IDENTIFIER}/[ \r\t\n\\\"]+	{ printf("Line %d: Found the IDENTIFIER %s\n", lineNum, yytext); }

{POS_INT}/[ \r\t\n\\\"]+	{ printf("Line %d: Found the POS_INT %s\n", lineNum, yytext); }
{POS_REAL}/[ \r\t\n\\\"]+	{ printf("Line %d: Found the POS_REAL %s\n", lineNum, yytext); }

[ \r\t\\\"]+	/* skip whitespaces */
\n			++lineNum;
<<EOF>>	{
	printf("Line %d: EOF\n", lineNum);
	return EOF;
}

	/* error. + gia pollous xarakthres*/
[^ \r\t\n\\\"]+			{ printf("Line %d: Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }

%%
/* user code */

int main ()
{
	int token;
	while ( (token = yylex()) != EOF )
		printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}