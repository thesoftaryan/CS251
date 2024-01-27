%{
#include <stdio.h>
// regular expressions to describe the tokens for PHP language
%}



%%

"//".*"\n"	{printf("SLCOMMENT\n");} // SINGLE LINE COMMENTS : Giving comments the highest priority
"/*".*"*/"	{printf("MLCOMMENT\n");} // MULTI LINE COMMENTS : Giving comments the highest priority
"<?php"       { printf("START\n"); } // The start and end block must have the highest priority
"?>"       { printf("END\n"); }
";"       { printf("SEMI\n"); }

"include"      { printf("INCLUDE\n"); }
"require"      { printf("REQUIRE\n"); }
"("	{printf("LPARENTHESIS\n");}
")"	{printf("RPARENTHESIS\n");}
"{"	{printf("LCURLY\n");}
"}"	{printf("RCURLY\n");}
"["	{printf("LSQUARE\n");}
"]"	{printf("RSQUARE\n");}

 /* Keywords,Statements,ControlFlow:Start */

"echo"      { printf("ECHO\n"); } // Identifying echo keyword
"if"        { printf("IF\n"); } // Since, PHp is case-insensitive for keywords so we have taken all possible case for IF
"else"       { printf("ELSE\n"); }
"elseif"      { printf("ELSEIF\n"); }
"for"       { printf("FOR\n"); }
"while"      { printf("WHILE\n"); }
"do"       { printf("DO\n"); }
"switch"      { printf("SWITCH\n"); }
"case"      { printf("CASE\n"); }
"continue"      { printf("CONTINUE\n"); }
"break"      { printf("BREAK\n"); }
"function"   { printf("FUNCTION\n"); } // checking for function creation

 /* Keywords:End */

[a-zA-Z]+[a-zA-Z0-9_]*"()"	{printf("FUNCTION_CALL\n");} // identifying when a function is called



 /* Constants */

[0-9]+       { printf("CINT\n"); }
[0-9]+\.[0-9]+      { printf("CFLOAT\n"); }
\"[a-zA-Z0-9]+\"     { printf("CSTRING\n"); }
\'[a-zA-Z0-9]?\'     { printf("CCHAR\n"); }
"true"|"false"      { printf("CBOOL\n"); }

 /* Constants */

 /* operators */
"*"       { printf("MUL\n"); }
"/"       { printf("DIV\n"); }
"%"       { printf("MOD\n"); }
"+"       { printf("ADD\n"); }
"-"       { printf("SUB\n"); }
"."       { printf("DOT\n"); }
"<"       { printf("LT\n"); }
">"       { printf("GT\n"); }
"**"       { printf("POWER\n"); }
"<="       { printf("LE\n"); }
">="       { printf("GE\n"); }
"=="       { printf("EEQ\n"); }
"!="       { printf("NEQ\n"); }
"="       { printf("ASSG\n"); }
"||"       { printf("LOR\n"); }
"&&"       { printf("LAND\n"); }

 /* operators */



 /* Identifiers : START */

"$"[a-zA-Z_]+[a-zA-Z0-9_]*    { printf("IDENTIFIER\n"); } // regex for identifiers in php

 /* Identifiers : END */

[ \t\n]*      // Ignoring whitespaces and newline characters

%%

int yywrap(void){}

int main(){

 yylex();
}
