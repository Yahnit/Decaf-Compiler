%{
#include <iostream>
#include <cstdio>
using namespace std;
#include "parser.tab.h"
int lineno = 0;
%}

char \\n|\\t|\\'|\\\\|\\\"|[^\\"']
str {char}*
%%

"void"					{return void_stmt;}
"if"    				{return if_stmt;}
"elseif"				{return elseif_stmt;}
"else"  				{return else_stmt;}
"break"					{return break_stmt;}
"for"						{return for_stmt;}
"while"					{return while_stmt;}
"return"				{return ret_stmt;}
"continue"			{return cont_stmt;}

"%"						{return mod_op;}
"*"						{return mul_op;}
"/"						{return div_op;}
"+"						{return plus_op;}
"-"						{return minus_op;}

"["						{return lft_sbrac;}
"]"						{return rgt_sbrac;}
"("						{return lft_brac;}
")"						{return rgt_brac;}
"{"						{return lft_fbrac;}
"}"						{return rgt_fbrac;}


"+="					{return plus_eq;}
"-="					{return minus_eq;}
"="						{return eql;}

"&&"					{return cond_and;}
"||"					{return cond_or;}
"!"						{return not_stmt;}

"<<" 					{return double_less;}
">>" 					{return double_greater;}
"!="|"=="				{return EqOp;}
"<="|">="	 {return CompOp;}
"<" 						{return less_than;}
">" 						{return greater_than;}
","						{return comma;}
";"						{return semi_col;}
":"						{return colon;}
"?"						{return qstn_mark;}
"#"						{return hash_sym;}


"int"							{return INT;}
"bool"					{return BOOL;}
"char" 						{return CHAR;}
"uint" 						{return UINT;}
"include"					{return INCLUDE;}
"cout"						{return COUT;}
"cin"							{return CIN;}
"endl"						{return ENDL;}

"def"							{return DEF;}
"main"						{return MAIN;}
true|false 				{return BOOL_LIT;}
[-][0-9]+					{return INT_LIT;}
[0-9]+						{return UINT_LIT;}
"//".*						{}

[a-zA-Z]+[0-9]*		{ return ID; }


[a-zA-Z]+[0-9]*[.][a-zA-Z]+	{ return LIB_ID; }
\'{char}\'				{return CHAR_LIT;}
\"{str}\" 				{return STR_LIT;}


[ \t] 		{}
\n		{ ++lineno; }
.		{ printf("Line No %d: Unrecognized character '%c'\n", lineno, yytext[0]);}
