%{
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "y.tab.h"
int countn=0;
// regular expressions to describe the tokens for PHP language
%}



%%

"//".*"\n"	 // Ignoring SINGLE LINE COMMENTS : Giving comments the highest priority
"/*"(.*[\n]*)*"*/"	 // Ignoring MULTI LINE COMMENTS : Giving comments the highest priority
"<?php"       { strcpy(yylval.nd_obj.name,(yytext));  return START;} // The start and end block must have the highest priority
"?>"       { strcpy(yylval.nd_obj.name,(yytext));  return END;}


"("	{strcpy(yylval.nd_obj.name,(yytext));  return LPARENTHESIS;}
")"	{strcpy(yylval.nd_obj.name,(yytext));  return RPARENTHESIS;}
"{"	{strcpy(yylval.nd_obj.name,(yytext));  return LCURLY;}
"}"	{strcpy(yylval.nd_obj.name,(yytext));  return RCURLY;}
"["	{strcpy(yylval.nd_obj.name,(yytext));  return LSQUARE;}
"]"	{strcpy(yylval.nd_obj.name,(yytext));  return RSQUARE;}

 /* Keywords,Statements,ControlFlow:Start */

"echo"      { strcpy(yylval.nd_obj.name,(yytext));  return ECHO;} // Identifying echo keyword
"if"        { strcpy(yylval.nd_obj.name,(yytext));  return IF;} // Since, PHp is case-insensitive for keywords so we have taken all possible case for IF
"else"       { strcpy(yylval.nd_obj.name,(yytext)); return ELSE;}
"elseif"      { strcpy(yylval.nd_obj.name,(yytext));  return ELSEIF;}
"for"       { strcpy(yylval.nd_obj.name,(yytext));  return FOR;}
"while"      { strcpy(yylval.nd_obj.name,(yytext));  return WHILE;}
"do"       { strcpy(yylval.nd_obj.name,(yytext));  return DO;}
"switch"      { strcpy(yylval.nd_obj.name,(yytext));  return SWITCH;}
"case"      { strcpy(yylval.nd_obj.name,(yytext));  return CASE;}
"default"      { strcpy(yylval.nd_obj.name,(yytext));  return DEFAULT;}
"continue"      { strcpy(yylval.nd_obj.name,(yytext));  return CONTINUE;}
"break"      { strcpy(yylval.nd_obj.name,(yytext));  return BREAK;}
"return"      { strcpy(yylval.nd_obj.name,(yytext));  return RETURN;}
"function"   { strcpy(yylval.nd_obj.name,(yytext));  return FUNCTION;} // checking for function creation

 /* Keywords:End */





 /* Constants */

"true"|"false"     {strcpy(yylval.nd_obj.name,(yytext));  return CBOOL;}
[0-9]+       { strcpy(yylval.nd_obj.name,(yytext)); return CINT;}
[0-9]+\.[0-9]+      { strcpy(yylval.nd_obj.name,(yytext));return CFLOAT;}
\".+\"     { strcpy(yylval.nd_obj.name,(yytext)); return CSTRING;}
\'.?\'     {strcpy(yylval.nd_obj.name,(yytext));  return CCHAR;}

 /* Constants */
 
 [a-zA-Z]+[a-zA-Z0-9_]*	{ return FNAME;} // identifying when a function is called

 /* operators */
"++"       { strcpy(yylval.nd_obj.name,(yytext));  return UINCR;}
"--"       { strcpy(yylval.nd_obj.name,(yytext));  return UDECR;}
"*"       { strcpy(yylval.nd_obj.name,(yytext));  return MUL;}
"/"       { strcpy(yylval.nd_obj.name,(yytext));  return DIV;}
"%"       { strcpy(yylval.nd_obj.name,(yytext));  return MOD;}
"+"       { strcpy(yylval.nd_obj.name,(yytext));  return ADD;}
"-"       { strcpy(yylval.nd_obj.name,(yytext));  return SUB;}
"."       { strcpy(yylval.nd_obj.name,(yytext));  return DOT;}
"<"       { strcpy(yylval.nd_obj.name,(yytext)); return LT;}
">"       { strcpy(yylval.nd_obj.name,(yytext));  return GT;}
"**"       { strcpy(yylval.nd_obj.name,(yytext)); return EXPO;}
"<="       { strcpy(yylval.nd_obj.name,(yytext)); return LE;}
">="       { strcpy(yylval.nd_obj.name,(yytext)); return GE;}
"=="       { strcpy(yylval.nd_obj.name,(yytext)); return EEQ;}
"="       { strcpy(yylval.nd_obj.name,(yytext)); return ASSG;}
"!="       { strcpy(yylval.nd_obj.name,(yytext)); return NEQ;}

 /* operators */



 /* Identifiers : START */

"$"[a-zA-Z_]+[a-zA-Z0-9_]*    { strcpy(yylval.nd_obj.name,(yytext)); return IDENTIFIER;} // regex for identifiers in php

 /* Identifiers : END */

[ \t\n]*      // Ignoring whitespaces and newline characters

","	{strcpy(yylval.nd_obj.name,(yytext)); return COMMA;}
";"	{strcpy(yylval.nd_obj.name,(yytext)); return SEMI;}
":"	{strcpy(yylval.nd_obj.name,(yytext)); return COLON;}


%%

int yywrap(void){
	return 1;
}
