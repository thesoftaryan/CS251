%{
	#include<stdio.h>
    	#include<string.h>
    	#include<stdlib.h>
    	#include<ctype.h>
    	
    	// For now only taking limit of variables to be 50
	struct vars {
		char name[100];
		char value[256];
		int scope;
	} symbolTable[50];
	
	
	int yylex(void);
    	void yyerror(char* s);
    	int searchSTable(char* varName, char* val);
    	void insertSTable(char* varName, char* val);
	int flag=0;
	
	int icIndex=0;
	int tempVar=0;
	int label=0;
	int isIf=0;
	int varCount=0;
	int currentScope=0;
	char intermediateCodes[50][100];


	
	
%}


%union { 	struct var_name { 
			char name[100]; 
		} nd_obj;
		
		struct conditional { 
			char name[100];
			char ifPart[5];
			char elsePart[5];
		} conditional_obj;		
	} 


%token <nd_obj>	START END ECHO IF ELSE ELSEIF FOR WHILE DO SWITCH CASE DEFAULT CONTINUE BREAK RETURN FUNCTION FNAME CINT CFLOAT CSTRING CCHAR CBOOL EXPO LE GE EEQ NEQ IDENTIFIER ASSG COMMA SEMI COLON MUL DIV MOD ADD SUB DOT LT GT LPARENTHESIS RPARENTHESIS LCURLY RCURLY LSQUARE RSQUARE UINCR UDECR

%left LT GT LE GE EEQ NEQ
%left ADD SUB
%left MUL DIV

%type <nd_obj> s statement echostm declarestm value const loopstm loopcontibreak condistm switch funcstm funcdef funcinvoc relop

%type <conditional_obj> ifstm op

%%

 /* Start of the Parser */

s: START statements END {printf("\n******************* Valid Program *******************\n"); return 0;}
 ;


 /* Start of the Statements */
statements: statement statements
	  |
	  ;


 /* Start of the Statement 
 	declarestm - Statement for the declaration of the variables
 	loopstm - statement of loops like while and for and do while
 	op - boolean expression that results to a bool value
 	condistm - statements for conditional expressions
 */
statement: declarestm {strcpy($$.name,$1.name);}
	| loopstm {}
	| condistm {}
	| funcstm {}
	| echostm {}
	;

 /* Start of the ECHO statement */
echostm: ECHO value SEMI {};


 /* Start of the Declaration statement */
declarestm: IDENTIFIER ASSG value SEMI {
int res=searchSTable($1.name, $3.name);
if (res==-1){
	insertSTable($1.name, $3.name);
}
sprintf(intermediateCodes[icIndex++], "\t%s = %s\n", $1.name, $3.name);

};

 /* Start of the Declaration value statement */
value: op {strcpy($$.name,$1.name);}
	;
	
 /* Start of the const used in value */
const: CINT {strcpy($$.name,$1.name);}
	| CSTRING {strcpy($$.name,$1.name);}
	| CBOOL {strcpy($$.name,$1.name);}
	| CFLOAT {strcpy($$.name,$1.name);}
	| CCHAR {strcpy($$.name,$1.name);} 
	| IDENTIFIER {}
	| funcinvoc {};



 /* Start of the loop statements */
loopstm: WHILE LPARENTHESIS op RPARENTHESIS {currentScope++;} LCURLY statements RCURLY {currentScope--;}
	| FOR LPARENTHESIS declarestm op SEMI incrdecrstm IDENTIFIER incrdecrstm RPARENTHESIS {currentScope++;}LCURLY statements RCURLY {currentScope--;}
	| DO {currentScope++;} LCURLY statements RCURLY {currentScope--;} WHILE LPARENTHESIS op RPARENTHESIS SEMI {}
	| loopcontibreak {}
	;

 /* Start of the unary increment (++) and decrement (--) operators */
incrdecrstm: UINCR {}
	| UDECR {}
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
ifstm: IF {isIf=1;} LPARENTHESIS op RPARENTHESIS {
		sprintf(intermediateCodes[icIndex++], "\tif %s goto label%s\n\tgoto label%s\n", $4.name, $4.ifPart, $4.elsePart);
		sprintf(intermediateCodes[icIndex++],"label%s:\n", $4.ifPart);
	} {currentScope++;} LCURLY statements RCURLY {currentScope--; sprintf(intermediateCodes[icIndex++],"label%s:\n", $4.elsePart);} elseifstm elsestm {isIf=0;};

 /* Start of the elseif Statements */
elseifstm: ELSEIF LPARENTHESIS op RPARENTHESIS {currentScope++;} LCURLY statements RCURLY {currentScope--;} elseifstm {}
	|
	;

 /* Start of the else Statement */
elsestm: ELSE {currentScope++;} LCURLY statements RCURLY {currentScope--;}
	|
	;

 /* Start of the Switch Statements */
switch: SWITCH LPARENTHESIS IDENTIFIER RPARENTHESIS LCURLY switchcase switchdefault RCURLY {};

 /* Creating default option of the switch */
switchdefault: DEFAULT COLON statements {}
	|	
	;

 /* Start of the cases in switch */
switchcase: CASE const COLON statements switchcase {}
	|
	;
 
 /* function statements */
funcstm: funcdef {}
	| funcinvoc SEMI {}
	| RETURN value SEMI {};


 /* Start: Defining grammar for function definition*/
funcdef: FUNCTION FNAME LPARENTHESIS oneparam funcparams RPARENTHESIS {currentScope++;} LCURLY statements RCURLY {currentScope--;};

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
 /* Generating intermediate code for Arithmetic and relational operations */
op: const	{strcpy($$.name, $1.name);}
	|op ADD op {
	
		sprintf($$.name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", $$.name, $1.name, $2.name, $3.name);
	}
	| op SUB op {
		sprintf($$.name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", $$.name, $1.name, $2.name, $3.name);
	}
	| op DIV op {
		if(strcmp($3.name, "0")==0){
			printf("\n\nDivide by Zero Error. You cannot divide a value by 0!!!!\n");
			exit(-1);
		}
		sprintf($$.name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", $$.name, $1.name, $2.name, $3.name);
	}
	| op MUL op {
		sprintf($$.name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", $$.name, $1.name, $2.name, $3.name);
	}
	| op MOD op {
		sprintf($$.name, "t%d", tempVar); 
		tempVar++;
		sprintf(intermediateCodes[icIndex++],"\t%s = %s %s %s\n", $$.name, $1.name, $2.name, $3.name);
	}
	| op DOT op {}
	| op EXPO op {}
	| op relop op {
		
		if(isIf==0){
			/* if(strcmp($2.name, ">")==0){
				if(atoi($1.name) > atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "<")==0){
				if(atoi($1.name) < atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, ">=")==0){
				if(atoi($1.name) >= atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "<=")==0){
				if(atoi($1.name) <= atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "==")==0){
				if(atoi($1.name) == atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}else if(strcmp($2.name, "!=")==0){
				if(atoi($1.name) != atoi($3.name)){
					strcpy($$.name,"1");
				}else{strcpy($$.name,"0");}
			}*/
			
			
			
			sprintf(intermediateCodes[icIndex++], "\tif %s %s %s goto label%d\n", $1.name, $2.name, $3.name, label);
			sprintf(intermediateCodes[icIndex++], "\tt%d = 0\n", tempVar);
			
			sprintf($$.name, "t%d", tempVar);
			
			sprintf(intermediateCodes[icIndex++], "\tgoto label%d\n", label+1);
			
			sprintf(intermediateCodes[icIndex++], "label%d:\n\tt%d = 1\n",label, tempVar++);
			
			sprintf(intermediateCodes[icIndex++], "label%d: \n", label+1);
			label+=2;
		}else{
			sprintf($$.name, "%s %s %s", $1.name, $2.name, $3.name);
			sprintf($$.ifPart, "%d", label++);
			sprintf($$.elsePart, "%d", label++);
		}
		
			
		
		
	
	}
	| LPARENTHESIS op RPARENTHESIS	{strcpy($$.name,$2.name);}
	;

 /* Start of the Boolean operators */
relop: LT {strcpy($$.name, $1.name);}
	| GT {strcpy($$.name, $1.name);}
	| LE {strcpy($$.name, $1.name);}
	| GE {strcpy($$.name, $1.name);}
	| EEQ {strcpy($$.name, $1.name);}
	| NEQ {strcpy($$.name, $1.name);}

%%

// This function searches the symbol table and if found updates it to the given value;
int searchSTable(char* varName, char* val){

	for(int i=0; i<varCount; i++){
		if(strcmp(symbolTable[i].name, varName)==0){
			strcpy(symbolTable[i].value, val);
			return 1;
		}
	}
	
	return -1;
}

// This function inserts a variable data into the symbolTable
void insertSTable(char* varName, char* val){

	int index = varCount++;
	strcpy(symbolTable[index].name, varName);
	strcpy(symbolTable[index].value, val);
	symbolTable[index].scope = currentScope;
	
}



int main(){

	yyparse();
	if(flag!=1){
		printf("\n\n");
		printf("----------  INTERMEDIATE CODE GENERATED  -----------\n\n\n");
		for(int i=0; i<icIndex; i++){
			printf("%s", intermediateCodes[i]);
		}
		printf("\n\n");
		printf("------------------------------------------------------\n\n");
		
		printf("\n\n");
		printf("-------------------  Symbol Table  -------------------\n\n\n");
		
		printf("------------------------------------------------------\n");
		printf("Name\t\tValue\t\tScope");
		printf("\n------------------------------------------------------\n");
		for(int i=0; i<varCount; i++){
			printf("\n%s\t\t%s\t\t%d", symbolTable[i].name, symbolTable[i].value, symbolTable[i].scope);
		}
		printf("\n\n");
		printf("------------------------------------------------------\n\n");
	}
}

void yyerror(char *error){

	fprintf(stderr, "\n\n!!!!!!!!!!!!! error: %s !!!!!!!!!!!!!\n", error);
	flag=1;

}



