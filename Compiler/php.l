%{
#include <stdio.h>
#include "y.tab.h"
// regular expressions to describe the tokens for PHP language
%}



%%

"//".*"\n"	{printf("SLCOMMENT\n");return SLCOMMENT;} // SINGLE LINE COMMENTS : Giving comments the highest priority
"/*".*"*/"	{printf("MLCOMMENT\n");return MLCOMMENT;} // MULTI LINE COMMENTS : Giving comments the highest priority
"<?php"       { printf("START\n"); return START;} // The start and end block must have the highest priority
"?>"       { printf("END\n"); return END;}


"include"      { printf("INCLUDE\n"); return INCLUDE;}
"require"      { printf("REQUIRE\n"); return REQUIRE;}

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
"continue"      { printf("CONTINUE\n"); return CONTINUE;}
"break"      { printf("BREAK\n"); return BREAK;}
"function"   { printf("FUNCTION\n"); return FUNCTION;} // checking for function creation

 /* Keywords:End */

[a-zA-Z]+[a-zA-Z0-9_]*"()"	{printf("FCALL\n"); return FCALL;} // identifying when a function is called



 /* Constants */

[0-9]+       { printf("CINT\n"); return CINT;}
[0-9]+\.[0-9]+      { printf("CFLOAT\n"); return CFLOAT;}
\"[a-zA-Z0-9 ]+\"     { printf("CSTRING\n"); return CSTRING;}
\'[a-zA-Z0-9]?\'     { printf("CCHAR\n"); return CCHAR;}
"true"|"false"      { printf("CBOOL\n"); return CBOOL;}

 /* Constants */

 /* operators */
"**"       { printf("EXPO\n"); return EXPO;}
"<="       { printf("LE\n");return LE;}
">="       { printf("GE\n");return GE;}
"=="       { printf("EEQ\n");return EEQ;}
"!="       { printf("NEQ\n");return NEQ;}

 /* operators */



 /* Identifiers : START */

"$"[a-zA-Z_]+[a-zA-Z0-9_]*    { printf("IDENTIFIER\n");return IDENTIFIER;} // regex for identifiers in php

 /* Identifiers : END */

[ \t\n]*      // Ignoring whitespaces and newline characters

%%

int yywrap(void){
	return 1;
}

