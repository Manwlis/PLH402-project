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
%type <crepr> decl_list decl decl_id
//const
%type <crepr> const_decl_body const_decl_list const_decl_init
//let
%type <crepr> let_decl_body let_decl_list let_decl_init

// shnarthseis
//%type <crepr> function

// kuria domikh monada
%type <crepr> body //body_line

// genika
%type <crepr> type_spec
%type <crepr> expr string 
%type <crepr> table_id table_init table_init_values
%type <crepr> bool



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
| KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
	// no data declaration
		if(yyerror_count==0) {
			puts(c_prologue); 
			printf("/* program */ \n\n");
			printf("int main() {\n%s\n} \n", $10);
		}
}
;

//////// dhlwsh dedomenwn
decl_list: 
decl_list decl { $$ = template("%s\n%s", $1, $2); }
| decl { $$ = $1; }
;

decl: 
KW_CONST const_decl_body { $$ = template("const %s", $2); }
| KW_LET let_decl_body { $$ = template("%s", $2); }
;

decl_id: 
IDENTIFIER { $$ = $1; } 
| IDENTIFIER '[' ']' { $$ = template("*%s", $1); /* pointer */}
;

// constants
const_decl_body: 
const_decl_list ':' type_spec ';' { $$ = template("%s %s;", $3, $1); }
;
const_decl_list: 
const_decl_list ',' const_decl_init { $$ = template("%s, %s", $1, $3 );}
| const_decl_init { $$ = $1; }
;
const_decl_init:
decl_id    ASSIGN_OP expr       { $$ = template("%s = %s", $1, $3); }	// i <- 1 / i <- 1.1
| decl_id  ASSIGN_OP bool       { $$ = template("%s = %s", $1, $3); }	// i <- true
| decl_id  ASSIGN_OP string     { $$ = template("*%s = %s", $1, $3); }	// i <- "message"
| decl_id  ASSIGN_OP IDENTIFIER { $$ = template("%s = %s", $1, $3); }	// i <- x
| table_id ASSIGN_OP string     { $$ = template("%s = %s", $1, $3); }	// i[10] <- "message"
| table_id ASSIGN_OP table_init { $$ = template("%s = %s", $1, $3); }	// i[2] <- {1 , 2}
;

// lets
let_decl_body:
let_decl_list ':' type_spec ';' { $$ = template("%s %s;", $3, $1); }
;
let_decl_list: 
let_decl_list ',' let_decl_init { $$ = template("%s, %s", $1, $3 );}
| let_decl_init { $$ = $1; }
;
let_decl_init:
decl_id                         { $$ = $1; }							// i
| decl_id  ASSIGN_OP expr       { $$ = template("%s = %s", $1, $3); }	// i <- 1 / i <- 1.1
| decl_id  ASSIGN_OP bool       { $$ = template("%s = %s", $1, $3); }	// i <- true
| decl_id  ASSIGN_OP string     { $$ = template("*%s = %s", $1, $3); }	// i <- "message"
| decl_id  ASSIGN_OP IDENTIFIER { $$ = template("%s = %s", $1, $3); }	// i <- x
| table_id                      { $$ = $1; }							// i[10]
| table_id ASSIGN_OP string     { $$ = template("%s = %s", $1, $3); }	// i[10] <- "message"
| table_id ASSIGN_OP table_init { $$ = template("%s = %s", $1, $3); }	// i[2] <- {1 , 2}
;
//////// telos dhlwshs dedomenwn


// tupoi dedomenwn
type_spec:
KW_INT { $$ = "int"; }
| KW_REAL { $$ = "double"; }
| KW_BOOL { $$ = "int"; }
| KW_STRING { $$ = "char"; }
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
'{' table_init_values '}' { $$ = template("{%s}", $2); }
;
table_init_values: 
table_init_values ',' expr { $$ = template("%s, %s", $1, $3); }
| table_init_values ',' bool { $$ = template("%s, %s", $1, $3); }
| expr { $$ = $1; }
| bool { $$ = $1; }
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
