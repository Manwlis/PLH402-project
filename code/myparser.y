%{
	#include <stdlib.h>
	#include <stdarg.h>
	#include <stdio.h>
	#include <string.h>		
	#include "cgen.h"

	extern int yylex(void);
	extern int line_num;
	extern int comment_start_line = 1;

	extern char *line_buffer;
%}

%union
{
	char* crepr;
}


	/***** keywords *****/
%token KW_INT
%token KW_REAL
%token KW_BOOL
%token KW_STRING
%token KW_IF
%token KW_THEN
%token KW_ELSE
%token KW_FI
%token KW_WHILE
%token KW_LOOP
%token KW_POOL
%token KW_CONST
%token KW_LET
%token KW_BREAK
%token KW_RETURN
%token KW_START


	/***** operators *****/
	/* arithmetic */
%token ADD_POS_OP
%token SUBTRACT_NEG_OP
%token MULTIPLY_OP
%token DIVIDE_OP
%token MOD_OP
	/* relational */
%token EQUAL_OP
%token DIFFERENT_OP
%token LESS_OP
%token EQUAL_LESS_OP
	/* logical */
%token AND_OP
%token OR_OP
%token NOT_OP
	/* delimeters */
%token ASSIGN_OP
%token COLON
%token SEMICOLON
%token COMMA
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token LEFT_BRACKET
%token RIGHT_BRACKET
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
	/* ???????????????? */
%token ARROW_OP


	/***** values *****/
	/* legal formats */
%token <crepr> POS_INT
%token <crepr> POS_REAL
%token KW_TRUE
%token KW_FALSE


	/***** ids *****/
%token <crepr> IDENTIFIER


	/***** strings *****/
%token <crepr> STRING


%start program

%type <crepr> decl_list body decl
%type <crepr> const_decl_body const_decl_list const_decl_init const_decl_id
%type <crepr> type_spec
%type <crepr> expr


%%

program: decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT ARROW '{' body '}' { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
	if(yyerror_count==0) {
    // include the teaclib.h file
	  puts(c_prologue); 
	  printf("/* program */ \n\n");
	  printf("%s\n\n", $1);
	  printf("int main() {\n%s\n} \n", $11);
	}
}
;

decl_list: decl_list decl { $$ = template("%s\n%s", $1, $2); }
| decl { $$ = $1; }
;

decl: KW_CONST const_decl_body { $$ = template("const %s", $2); }

;

const_decl_body: const_decl_list ':' type_spec ';' {  $$ = template("%s %s;", $3, $1); }
;

const_decl_list: const_decl_list ',' const_decl_init { $$ = template("%s, %s", $1, $3 );}
| const_decl_init { $$ = $1; }
;

const_decl_init: const_decl_id { $$ = $1; }
| const_decl_id ASSIGN expr { $$ = template("%s=%s", $1, $3); 
}
; 

const_decl_id: IDENT { $$ = $1; } 
| IDENT '['']' { $$ = template("*%s", $1); }
;

type_spec:  KW_INT { $$ = "int"; }
| KW_REAL { $$ = "double"; }
;

expr: POSINT { $$ = $1; }
| REAL { $$ = $1; }
;

body: { $$="";}
;

%%
int main () {

	BEGIN(start);

	if ( yyparse() != 0 )
		printf("Rejected!\n");
	else
		printf("Your program is syntactically correct!\n\n");

	free(line_buffer);
	
}

