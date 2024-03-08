%{
	#include <stdio.h>
	int yylex(void);
    	void yyerror(char* s);
	int flag=0;
%}

%left '<' '>' LE GE EQ NE
%left '+''-'
%left '*''/'

%token	START END ECHO IF ELSE ELSEIF FOR WHILE DO SWITCH CASE DEFAULT CONTINUE BREAK RETURN FUNCTION FNAME CINT CFLOAT CSTRING CCHAR CBOOL EXPO LE GE EEQ NEQ IDENTIFIER ASSG COMMA SEMI COLON MUL DIV MOD ADD SUB DOT LT GT LPARENTHESIS RPARENTHESIS LCURLY RCURLY LSQUARE RSQUARE UINCR UDECR


%%

 /* Start of the Parser */

s: START statements END {printf("\n****** Valid Program *******\n"); return 0;}
 ;


 /* Start of the Statements */
statements: statement statements
	  |
	  ;

 /* Start of the Statement 
 	declarestm - Statement for the declaration of the variables
 	loopstm - statement of loops like while and for and do while
 	boolexpr - boolean expression that results to a bool value
 	condistm - statements for conditional expressions
 */
statement: declarestm {printf("Reached at declaration statement\n");}
	| loopstm {printf("Reached at loop statement\n");}
	| boolexpr {printf("Reached at boolean statement\n");}
	| condistm {printf("Reached at conditional statement\n");}
	| funcstm {}
	| echostm {}
	;

 /* Start of the ECHO statement */
echostm: ECHO value SEMI {};


 /* Start of the Declaration statement */
declarestm: IDENTIFIER ASSG value SEMI {printf("Inside declare stmt\n\n");};

 /* Start of the Declaration value statement */
value: const {printf("Reached const\n");}
	| value op const {printf("Reached value op const\n");}
	| LPARENTHESIS value RPARENTHESIS;
	
 /* Start of the const used in value */
const: CINT {printf("Reached CINT\n");}
	| CSTRING {printf("Reached CSTRING\n");}
	| CBOOL {printf("Reached CBOOL\n");}
	| CFLOAT {printf("Reached CFLOAT\n");}
	| CCHAR {printf("Reached CCHAR\n");} 
	| IDENTIFIER {printf("Reached in const Identifier\n");}
	| funcinvoc {};



 /* Start of the loop statements */
loopstm: WHILE LPARENTHESIS boolexpr RPARENTHESIS LCURLY statements RCURLY {printf("yacc: While");}
	| FOR LPARENTHESIS declarestm boolexpr SEMI incrdecrstm IDENTIFIER incrdecrstm RPARENTHESIS LCURLY statements RCURLY {printf("yacc: For");}
	| DO LCURLY statements RCURLY WHILE LPARENTHESIS boolexpr RPARENTHESIS SEMI {printf("yacc: DO WHILE");}
	| loopcontibreak {}
	;

 /* Start of the unary increment (++) and decrement (--) operators */
incrdecrstm: UINCR {printf("incr\n");}
	| UDECR {printf("decr\n");}
	|
	;
	
 /* Start of the break and continue keyword in a loop */
loopcontibreak: BREAK SEMI {}
	| CONTINUE SEMI {}
	;
	
 /* Start of the Conditional Statements */
condistm: ifstm {}
	| switch {};


 /* Start of the IF Statement */
ifstm:IF LPARENTHESIS boolexpr RPARENTHESIS LCURLY statements RCURLY  elseifstm elsestm;

 /* Start of the elseif Statements */
elseifstm: ELSEIF LPARENTHESIS boolexpr RPARENTHESIS LCURLY statements RCURLY elseifstm {}
	|
	;

 /* Start of the else Statement */
elsestm: ELSE LCURLY statements RCURLY {}
	|
	;

 /* Start of the Switch Statements */
switch: SWITCH LPARENTHESIS IDENTIFIER RPARENTHESIS LCURLY switchcase switchdefault RCURLY {};

 /* Creating default option of the switch */
switchdefault: DEFAULT COLON statements {}
	|	
	;

 /* Start of the cases in switch */
switchcase: CASE const COLON statements switchcase {printf("Reached conti\n");}
	|
	;
 

 /* function statements */
funcstm: funcdef {}
	| funcinvoc SEMI {}
	| RETURN value SEMI {};


 /* Start: Defining grammar for function definition*/
funcdef: FUNCTION FNAME LPARENTHESIS oneparam funcparams RPARENTHESIS LCURLY statements RCURLY {};

oneparam: IDENTIFIER {}
	|
	;
funcparams: COMMA IDENTIFIER funcparams {}
	|
	;
 /* END : Defining grammar for function definition*/
 
 
/* Defining grammar for function invocation: Currently function invocation supports only identifiers*/
funcinvoc: FNAME LPARENTHESIS oneargu constfuncargu RPARENTHESIS {};
oneargu: const {}
	|
	;
constfuncargu : COMMA const constfuncargu {}
	|
	;


 /* Start of the operations */
op: ADD {printf("yacc: Addition\n");}
	| SUB {printf("yacc: SUB\n");}
	| DIV {printf("yacc: DIV\n");}
	| MUL {printf("yacc: MUL\n");}
	| MOD {printf("yacc: MOD\n");}
	| DOT {printf("yacc: DOT\n");}
	| EXPO {printf("yacc: EXPO\n");}
	;

 /* Start of the Boolean expression */
boolexpr: const LT const {$$ = $1 < $3;}
	| const GT const {$$ = $1 > $3;}
	| const LE const {$$ = $1 <= $3;}
	| const GE const {$$ = $1 >= $3;}
	| const EEQ const {$$ = $1 == $3;}
	| const NEQ const {$$ = $1 != $3;};

%%


void yyerror(char *error){

	fprintf(stderr, "!!!!!!!!!!!!! error: %s !!!!!!!!!!!!!\n", error);
	flag=1;

}



