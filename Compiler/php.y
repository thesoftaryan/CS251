%{
	#include <stdio.h>
	int flag=0;
%}

%start S

%token	SLCOMMENT MLCOMMENT START END INCLUDE REQUIRE ECHO IF ELSE ELSEIF FOR WHILE DO SWITCH CASE CONTINUE BREAK FUNCTION FCALL CINT CFLOAT CSTRING CCHAR CBOOL EXPO LE GE EEQ NEQ IDENTIFIER


%%

S: START STATEMENTS END {printf("\n****** Valid Program *******\n"); return 0;}
 ;

STATEMENTS: STATEMENT STATEMENTS
	  |
	  ;

STATEMENT: DECLARESTM {printf("Reached at statement\n");}
	 ;

DECLARESTM: IDENTIFIER '=' VALUE ';' {printf("Inside declare stmt\n\n");}
	  ;

VALUE: CONST OPERATOR VALUE
     | CONST
     ;

CONST: CINT
     | CFLOAT
     | CSTRING
     | CCHAR
     | CBOOL
     ;

OPERATOR: '*'
	| '/'
	| '%'
	| '+'
	| '-'
	| '.'
	| EXPO
	;



 

%%


void yyerror(char *error){

	fprintf(stderr, "error: %s\n", error);
	flag=1;

}

void main(){
	printf("Enter your file: ");
	yyparse();

}

