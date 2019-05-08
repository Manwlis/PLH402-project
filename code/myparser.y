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

////// dhlwseis dedomenwn
%type <crepr> type_spec
%type <crepr> decl_id
// pinakes
%type <crepr> table_id table_init table_init_values
// lista dhlwsewn
%type <crepr> decl_list decl
// const
%type <crepr> const_decl_body const_decl_list const_decl_init
// let
%type <crepr> let_decl_body let_decl_list let_decl_init

////// dhlwseis shnarthsewn
%type <crepr> func_list func
%type <crepr> func_param_list func_param param_list

////// expresions
%type <crepr> expr term bool func_call func_stm

////// entoles
%type <crepr> instr instr_func_call instr_assigment

////// kuria domikh monada
%type <crepr> body body_decl_list instr_list return

/* %left '=' '<' DIFFERENT_OP EQUAL_LESS_OP
%left AND_OP OR_OP
%left '-' '+'
%left '*' '/' '%' */


%%
/***********************/
/**** Grammar rules ****/
/***********************/

//////// programmata ////////
program: 
// declarations
// functions
// const start <- (): int => { body }
decl_list func_list KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", $1);
		printf("%s\n\n", $2);
		printf("int main() {\n%s\n} \n", $12);
	}
}
| func_list KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
	// no data declaration
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", $1);
		printf("int main() {\n%s\n} \n", $11);
	}
}
| decl_list KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
	// no functions
	if(yyerror_count==0) {
		puts(c_prologue); 
		printf("/* program */ \n\n");
		printf("%s\n\n", $1);
		printf("int main() {\n%s\n} \n", $11);
	}
}
| KW_CONST KW_START ASSIGN_OP '(' ')' ':' KW_INT ARROW_OP '{' body '}' { 
	// no data declaration
	// no functions
		if(yyerror_count==0) {
			puts(c_prologue); 
			printf("/* program */ \n\n");
			printf("int main() {\n%s\n} \n", $10);
		}
}
;


//////// dhlwsh dedomenwn ////////

// tupoi dedomenwn
type_spec:
KW_INT                              { $$ = "int"; }
| KW_REAL                           { $$ = "double"; }
| KW_BOOL                           { $$ = "int"; }
| KW_STRING                         { $$ = "char"; }
| '[' ']' KW_INT                    { $$ = "int*"; }
| '[' ']' KW_REAL                   { $$ = "double*"; }
| '[' ']' KW_BOOL                   { $$ = "int*"; }
| '[' ']' KW_STRING                 { $$ = "char*"; }
;

// ids
decl_id: 
IDENTIFIER { $$ = $1; } 
| IDENTIFIER '[' ']'                { $$ = template("*%s", $1); /* pointer */}
| table_id                          { $$ = $1; } ///////////////////////////isws prepei na allaksei se akeraia sta8era to [ expr ]
;
// pinakes
table_id:
IDENTIFIER '[' expr ']'             { $$ = template("%s[%s]", $1, $3); /* pinakas */}
;
// initialize pinaka
table_init:
'{' table_init_values '}'           { $$ = template("{%s}", $2); }
;
table_init_values: 
table_init_values ',' expr          { $$ = template("%s, %s", $1, $3); }
| expr                              { $$ = $1; }
;

// lista dhlwsewn
decl_list: 
decl_list decl                      { $$ = template("%s\n%s", $1, $2); }
| decl                              { $$ = $1; }
;
// tupoi dhlwshs
decl: 
KW_CONST const_decl_body            { $$ = template("const %s", $2); }
| KW_LET let_decl_body              { $$ = template("%s", $2); }
;

// lets
let_decl_body:
let_decl_list ':' type_spec ';'     { $$ = template("%s %s;", $3, $1); }
;
let_decl_list: 
let_decl_list ',' let_decl_init     { $$ = template("%s, %s", $1, $3 );}
| let_decl_init                     { $$ = $1; }
;
let_decl_init:
decl_id                             { $$ = $1; }								// i
| decl_id ASSIGN_OP expr            { $$ = template("%s = %s", $1, $3); }		// i <- 1 / i <- 1.1
| decl_id ASSIGN_OP STRING          { $$ = template("%s = %s", $1, $3); }		// i <- "message"
| decl_id ASSIGN_OP table_init      { $$ = template("%s = %s", $1, $3); }		// i[2] <- {1 , 2}
;

// constants
const_decl_body: 
const_decl_list ':' type_spec ';'   { $$ = template("%s %s;", $3, $1); }
;
const_decl_list: 
const_decl_list ',' const_decl_init { $$ = template("%s, %s", $1, $3 );}
| const_decl_init                   { $$ = $1; }
;
const_decl_init:
decl_id   ASSIGN_OP expr            { $$ = template("%s = %s", $1, $3); }		// i <- 1 / i <- 1.1
| decl_id ASSIGN_OP STRING          { $$ = template("%s = %s", $1, $3); }		// i <- "message"
| decl_id ASSIGN_OP table_init      { $$ = template("%s = %s", $1, $3); }		// i[2] <- {1 , 2}
;
//////// dhlwshs dedomenwn telos ////////


//////// dhlwsh synarthsewn ////////
func_list: 
func_list func                      { $$ = template("%s\n\n%s", $1, $2); }
| func                              { $$ = $1; }
;
func: 
KW_CONST decl_id ASSIGN_OP '(' func_param_list ')' ':' type_spec ARROW_OP '{' body '}'	{
	$$ = template("%s %s (%s) {\n%s\n}", $8, $2, $5, $11);
}
;

func_param_list:
{ $$="";}
| func_param_list ',' func_param    { $$ = template("%s, %s", $1, $3); }
| func_param                        { $$ = $1; }
;
func_param:
param_list ':' type_spec {
	
	// save the strings
	char *param_list = strdup($1);
	char *type_spec = strdup($3);

	// count the parameters
	int count = 0;
	int i = 0;
	while (param_list[i] != '\0') {
		if (param_list[i] == ',')
			count++;
		i++;
	}
	// ipologismos mege8ous telikou string kai malloc
	char *final_string = (char *) malloc(strlen(param_list) + (count * (strlen(type_spec) + 2)));

	// break string to individual parameters
	char *temp = strtok(param_list, ",");
	while( temp != NULL){

		// concat parameters with their types and create C format
		strcat(final_string, type_spec);
		strcat(final_string, " ");
		strcat(final_string, temp);
		//next ','
		temp = strtok(NULL, ",");
		// put ',' only if there is another parameter
		if( temp != NULL)
			strcat(final_string, ", ");
	}

	// return complete string
	$$ = strdup(final_string);
	free(final_string);
}
;
param_list:
param_list ',' decl_id              { $$ = template("%s,%s", $1, $3); }
| decl_id                           { $$ = $1; }
;

// swma shnarthsewn
body:
instr_list                          { $$ = $1; }
| body_decl_list instr_list         { $$ = template("%s\n\n%s", $1, $2); }
;
body_decl_list: 
body_decl_list decl	                { $$ = template("%s\n    %s", $1, $2); }
| decl                              { $$ = template("    %s", $1); }
;
instr_list:
instr_list instr                    { $$ = template("%s\n    %s", $1, $2); }
| instr                             { $$ = template("    %s", $1); }
;
//////// dhlwsh synarthsewn telos ////////


//////// expresions ////////
expr:
term '+' expr                       { $$ = template("%s + %s", $1, $3); }		// pros8esh
| term '-' expr                     { $$ = template("%s - %s", $1, $3); }		// afairesh
| term '*' expr                     { $$ = template("%s * %s", $1, $3); }		// pollaplasiasmos
| term '/' expr                     { $$ = template("%s / %s", $1, $3); }		// diairesh
| term '%' expr                     { $$ = template("%s %% %s", $1, $3); }		// modulo
| term '=' expr                     { $$ = template("%s == %s", $1, $3); }		// equal
| term '<' expr                     { $$ = template("%s < %s", $1, $3); }		// less
| term EQUAL_LESS_OP expr           { $$ = template("%s <= %s", $1, $3); }		// equal less
| term DIFFERENT_OP expr            { $$ = template("%s != %s", $1, $3); }		// different
| term AND_OP expr                  { $$ = template("%s && %s", $1, $3); }		// and
| term OR_OP expr                   { $$ = template("%s || %s", $1, $3); }		// or
| term                              { $$ = $1; }
;

term:
POS_INT                             { $$ = $1; }								// int
| POS_REAL                          { $$ = $1; }								// real
| bool                              { $$ = $1; }								// bool
| decl_id                           { $$ = $1; }								// metablhth
| func_call                         { $$ = $1; }								// kalesma shnarthshs
| '(' expr ')'                      { $$ = template("(%s)", $2); }				// ()
| '-' term                          { $$ = template("-%s", $2); }				// proshmo -
| '+' term                          { $$ = template("+%s", $2); }				// proshmo +
| NOT_OP term                       { $$ = template("!%s", $2); }				// not
;

bool:
KW_TRUE                             { $$ = "1"; }
| KW_FALSE                          { $$ = "0"; }
;

// kalesma shnarthshs
func_call:
IDENTIFIER '(' func_stm ')'         { $$ = template("%s(%s)", $1, $3); }
| IDENTIFIER '(' ')'                { $$ = template("%s()", $1); }
;
func_stm: 
func_stm ',' expr                   { $$ = template("%s, %s", $1, $3); }
| expr                              { $$ = $1; }
;
//////// expresions telos ////////


//////// entoles ////////
instr:
instr_func_call	                    { $$ = $1; }
| instr_assigment                   { $$ = $1; }
| return                            { $$ = $1; }
;

// entoles ana8eshs
instr_assigment:
decl_id ASSIGN_OP expr ';'          { $$ = template("%s = %s;", $1, $3); }
;

// entoles elenxou



// entoles broxou




// entoles epistrofhs
return:
KW_RETURN expr ';'                  { $$ = template("return %s;", $2); }
| KW_RETURN ';'                     { $$ = "return;"; }
;

// entoles klhshs sunarthshs
instr_func_call:
func_call ';'                       { $$ = template("%s;", $1); }
;
//////// entoles telos ////////



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

