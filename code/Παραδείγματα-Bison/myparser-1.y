%{
  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int line_num;
%}

%union
{
	char* str;
  int intNum;
  double doubleNum;
}

%define parse.trace
%debug

%token <str> IDENTIFIER
%token <intNum> POSINT 
%token <doubleNum> REAL 
%token <str> STRING

%token ASSIGN

%token KW_IF
%token KW_THEN
%token KW_ELSE

%token KW_TRUE
%token KW_FALSE

%start input

%type <doubleNum> expr

%left '-' '+'
%left '*' '/'

%%

input:  
  %empty
| input expr ';' 
{ 
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("Expression evaluates to: %f\n", $2); 
  }  
}
;

expr:
  POSINT { $$ = $1; }
| REAL { $$ = $1; }
| '(' expr ')' { $$ = $2; }
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { $$ = $1 / $3; }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
