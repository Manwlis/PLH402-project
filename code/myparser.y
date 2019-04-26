/**********************/
/****** prologue ******/
/**********************/

%{
	#include <stdlib.h>
	#include <stdarg.h>
	#include <stdio.h>
	#include <string.h>	
	#include "cgen.h"

	extern int yylex(void);
	extern int line_num;
	extern int comment_start_line;

	extern char *line_buffer;
%}


/****************************/
/**** Bison declarations ****/
/****************************/

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
/* relational */
%token DIFFERENT_OP
%token EQUAL_LESS_OP
/* logical */
%token AND_OP
%token OR_OP
%token NOT_OP
/* delimeters */
%token ASSIGN_OP
/* 	 */
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

// dhlwseis metablhtwn
%type <crepr> decl_list decl
//const
%type <crepr> const_decl_body const_decl_list const_decl_init const_decl_id
//let
//%type <crepr> let_decl_body let_decl_list let_decl_init let_decl_id

// shnarthseis
//%type <crepr> function

// kuria domikh monada
%type <crepr> body //body_line

// genika
%type <crepr> type_spec
%type <crepr> expr string 
%type <crepr> table_id table_init table_init_expr
%type <crepr> bool

%left ADD_POS_OP SUBTRACT_NEG_OP
%left MULTIPLY_OP DIVIDE_OP MOD_OP


%%
/***********************/
/**** Grammar rules ****/
/***********************/

// const start <- (): int => { body }
program: decl_list KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
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

//////// dhlwsh metablhtwn
decl_list: 
decl_list decl { $$ = template("%s\n%s", $1, $2); }
| decl { $$ = $1; }
;

decl: 
KW_CONST const_decl_body { $$ = template("const %s", $2); }
//| KW_LET let_decl_body { $$ = template("%s", $2); }
;

//////////////////////////////////////an einai na elenxei to typo twn dedomenwn allazw to type_spec kai to spaw se 4. 
//8a prepei na spasoun kai ta table init
// constants
const_decl_body: 
const_decl_list ':' type_spec ';' {  $$ = template("%s %s;", $3, $1); }
;
const_decl_list: 
const_decl_list ',' const_decl_init { $$ = template("%s, %s", $1, $3 );}
| const_decl_init { $$ = $1; }
;

const_decl_init:
const_decl_id ASSIGN_OP expr { $$ = template("%s = %s", $1, $3);	/* oi sta8eres ipoxrewtika pernoun timh */}// swsto
| table_id ASSIGN_OP '{' table_init '}' { $$ = template("%s = {%s}", $1, $4);}			// la8os sth metatroph
| const_decl_id ASSIGN_OP bool { $$ = template("%s = %s", $1, $3);}										// swsto
| table_id ASSIGN_OP bool { $$ = template("%s = %s", $1, $3);}														// la8os sth metatroph
| const_decl_id ASSIGN_OP string { $$ = template("*%s = %s", $1, $3);}								// swsto
| table_id ASSIGN_OP string { $$ = template("%s = %s", $1, $3);}													// swsto
| const_decl_id ASSIGN_OP IDENTIFIER { $$ = template("%s = %s", $1, $3);}							// swsto
; 

const_decl_id: 
IDENTIFIER { $$ = $1; } 
| IDENTIFIER '[' ']' { $$ = template("*%s", $1); /* pointer */}
;




//////// telos dhlwshs metablhtwn


// tupoi dedomenwn
type_spec:
KW_INT { $$ = "int"; }
| KW_REAL { $$ = "double"; }
| KW_BOOL { $$ = "int"; }
| KW_STRING { $$ = "char"; }
;

expr:
POS_INT { $$ = $1; }
| POS_REAL { $$ = $1; }
;

string:
STRING { $$ = $1; }
;

//pinakes
table_id:
IDENTIFIER '[' POS_INT ']' { $$ = template("%s[%s]", $1, $3); /* pinakas */}
;
//initialize pinaka
table_init: 
table_init table_init_expr { $$ = template("%s, %s", $1, $2); }
| expr { $$ = $1; }
| bool { $$ = $1; }
;
table_init_expr: 
',' expr { $$ = $2; }
| ',' bool { $$ = $2; }
;

expr: 
POS_INT { $$ = $1; }
| POS_REAL { $$ = $1; }
;

bool:
KW_TRUE {$$ = "1";}
| KW_FALSE {$$ = "0";}
;

body: 
{ $$="";}
//body body_line { $$ = template("%s\n%s", $1, $2); }
//| body_line { $$ = $1; }
;


%%
/**********************/
/****** epilogue ******/
/**********************/

int main () {

	if ( yyparse() != 0 )
		printf("Rejected!\n");
	else
		printf("\n/* Your program is syntactically correct!*/\n\n");

	free(line_buffer);
	
}

/* 
| '(' expr ')' { $$ = template("(%s)", $2); }
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
| expr '%' expr { $$ = template("%s % %s", $1, $3); } */
/* 
// lets
let_decl_body:
let_decl_list ':' type_spec ';' {  $$ = template("%s %s;", $3, $1); }
;

let_decl_list: 
let_decl_list ',' let_decl_init { $$ = template("%s, %s", $1, $3 );}
| let_decl_init { $$ = $1; }
;

let_decl_init: 
let_decl_id { $$ = $1; }
| let_decl_id ASSIGN_OP expr { $$ = template("%s=%s", $1, $3);}
| let_decl_id ASSIGN_OP string { $$ = template("%s=%s", $1, $3);}
;  */