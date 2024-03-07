%{
#include <stdio.h>
#include "y.tab.h"
// regular expressions to describe the tokens for PHP language
%}



%%

"//".*"\n"	 // Ignoring SINGLE LINE COMMENTS : Giving comments the highest priority
"/*"(.*[\n]*)*"*/"	 // Ignoring MULTI LINE COMMENTS : Giving comments the highest priority
"<?php"       { printf("START\n"); return START;} // The start and end block must have the highest priority
"?>"       { printf("END\n"); return END;}


"("	{printf("LPARENTHESIS\n"); return LPARENTHESIS;}
")"	{printf("RPARENTHESIS\n"); return RPARENTHESIS;}
"{"	{printf("LCURLY\n"); return LCURLY;}
"}"	{printf("RCURLY\n"); return RCURLY;}
"["	{printf("LSQUARE\n"); return LSQUARE;}
"]"	{printf("RSQUARE\n"); return RSQUARE;}

 /* Keywords,Statements,ControlFlow:Start */

"echo"      { printf("ECHO\n"); return ECHO;} // Identifying echo keyword
"if"        { printf("IF\n"); return IF;} // Since, PHp is case-insensitive for keywords so we have taken all possible case for IF
"else"       { printf("ELSE\n"); return ELSE;}
"elseif"      { printf("ELSEIF\n"); return ELSEIF;}
"for"       { printf("FOR\n"); return FOR;}
"while"      { printf("WHILE\n"); return WHILE;}
"do"       { printf("DO\n"); return DO;}
"switch"      { printf("SWITCH\n"); return SWITCH;}
"case"      { printf("CASE\n"); return CASE;}
"default"      { printf("DEFAULT\n"); return DEFAULT;}
"continue"      { printf("CONTINUE\n"); return CONTINUE;}
"break"      { printf("BREAK\n"); return BREAK;}
"return"      { printf("RETURN\n"); return RETURN;}
"function"   { printf("FUNCTION\n"); return FUNCTION;} // checking for function creation

 /* Keywords:End */





 /* Constants */

"true"|"false"     { printf("CBOOL\n"); return CBOOL;}
[0-9]+       { printf("CINT\n"); return CINT;}
[0-9]+\.[0-9]+      { printf("CFLOAT\n"); return CFLOAT;}
\".+\"     { printf("CSTRING\n"); return CSTRING;}
\'.?\'     { printf("CCHAR\n"); return CCHAR;}

 /* Constants */
 
 [a-zA-Z]+[a-zA-Z0-9_]*	{printf("FNAME\n"); return FNAME;} // identifying when a function is called

 /* operators */
"++"       { printf("UINCR\n"); return UINCR;}
"--"       { printf("UDECR\n"); return UDECR;}
"*"       { printf("MUL\n"); return MUL;}
"/"       { printf("DIV\n"); return DIV;}
"%"       { printf("MOD\n"); return MOD;}
"+"       { printf("ADD\n"); return ADD;}
"-"       { printf("SUB\n"); return SUB;}
"."       { printf("DOT\n"); return DOT;}
"<"       { printf("LT\n"); return LT;}
">"       { printf("GT\n"); return GT;}
"**"       { printf("EXPO\n"); return EXPO;}
"<="       { printf("LE\n");return LE;}
">="       { printf("GE\n");return GE;}
"=="       { printf("EEQ\n");return EEQ;}
"="       { printf("ASSG\n");return ASSG;}
"!="       { printf("NEQ\n");return NEQ;}

 /* operators */



 /* Identifiers : START */

"$"[a-zA-Z_]+[a-zA-Z0-9_]*    { printf("IDENTIFIER : %s\n",yytext);return IDENTIFIER;} // regex for identifiers in php

 /* Identifiers : END */

[ \t\n]*      // Ignoring whitespaces and newline characters

","	{printf("COMMA\n");return COMMA;}
";"	{printf("SEMI\n");return SEMI;}
":"	{printf("COLON\n");return COLON;}


%%

int yywrap(void){
	return 1;
}

void main(int argc, char* argv[]){
	if(argc<2){
		printf("Usage: ./a.out <filename>\n");
		exit(1);
	}
	yyin=fopen(argv[1], "r");
	yyparse();

}

