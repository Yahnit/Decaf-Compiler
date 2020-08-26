/* $Id$ -*- mode: c++ -*- */
/** \file scanner.ll Define the example Flex lexical scanner */

%{ /*** C/C++ Declarations ***/

#include <string>
#include "scanner.h"

/* import the parser's token type into a local typedef */
typedef decaf::Parser::token token;
typedef decaf::Parser::token_type token_type;

/* By default yylex returns int, we use token_type. Unfortunately yyterminate
 * by default returns 0, which is not of token_type. */
#define yyterminate() return token::END

/* This disables inclusion of unistd.h, which is not available under Visual C++
 * on Win32. The C++ scanner uses STL streams instead. */
#define YY_NO_UNISTD_H

%}

/*** Flex Declarations and Options ***/

/* enable c++ scanner class generation */
%option c++

/* change the name of the scanner class. results in "decafFlexLexer" */
%option prefix="decaf"

/* the manual says "somewhat more optimized" */
%option batch

/* enable scanner to generate debug output. disable this for release
 * versions. */
%option debug

/* no support for include files is planned */
%option yywrap nounput

/* enables the use of start condition stacks */
%option stack

/* The following paragraph suffices to track locations accurately. Each time
 * yylex is invoked, the begin position is moved onto the end position. */
%{
    #define YY_USER_ACTION  yylloc->columns(yyleng);
%}

comments "//".*
alpha [a-zA-Z_]
digit [0-9]
alpha_num {alpha}|{digit}
id {alpha}({alpha_num})*
hex_digit {digit}|[a-fA-F]
d_lit {digit}+
hex_lit 0x({hex_digit})+
char \\n|\\t|\\'|\\\\|\\\"|[^\\"']
str {char}*

%% /*** Regular Expressions Part ***/

 /* code to place at the beginning of yylex() */
%{
    // reset location
    yylloc->step();
%}

"void"					{yylval->strVal = new std::string(yytext);return token::void_stmt;}
"if"    				{yylval->strVal = new std::string(yytext);return token::if_stmt;}
"elseif"				{yylval->strVal = new std::string(yytext);return token::elseif_stmt;}
"else"  				{yylval->strVal = new std::string(yytext);return token::else_stmt;}
"break"					{yylval->strVal = new std::string(yytext);return token::break_stmt;}
"for"						{yylval->strVal = new std::string(yytext);return token::for_stmt;}
"while"					{yylval->strVal = new std::string(yytext);return token::while_stmt;}
"return"				{yylval->strVal = new std::string(yytext);return token::ret_stmt;}
"continue"			{yylval->strVal = new std::string(yytext);return token::cont_stmt;}

"%"						{yylval->strVal = new std::string(yytext);return token::mod_op;}
"*"						{yylval->strVal = new std::string(yytext);return token::mul_op;}
"/"						{yylval->strVal = new std::string(yytext);return token::div_op;}
"+"						{yylval->strVal = new std::string(yytext);return token::plus_op;}
"-"						{yylval->strVal = new std::string(yytext);return token::minus_op;}

"["						{yylval->strVal = new std::string(yytext);return token::lft_sbrac;}
"]"						{yylval->strVal = new std::string(yytext);return token::rgt_sbrac;}
"("						{yylval->strVal = new std::string(yytext);return token::lft_brac;}
")"						{yylval->strVal = new std::string(yytext);return token::rgt_brac;}
"{"						{yylval->strVal = new std::string(yytext);return token::lft_fbrac;}
"}"						{yylval->strVal = new std::string(yytext);return token::rgt_fbrac;}


"+="					{yylval->strVal = new std::string(yytext);return token::plus_eq;}
"-="					{yylval->strVal = new std::string(yytext);return token::minus_eq;}
"="						{yylval->strVal = new std::string(yytext);return token::eql;}

"&&"					{yylval->strVal = new std::string(yytext);return token::cond_and;}
"||"					{yylval->strVal = new std::string(yytext);return token::cond_or;}
"!"						{yylval->strVal = new std::string(yytext);return token::not_stmt;}

"<<" 					{yylval->strVal = new std::string(yytext);return token::double_less;}
">>" 					{yylval->strVal = new std::string(yytext);return token::double_greater;}
"!="|"=="				{yylval->strVal = new std::string(yytext);return token::EqOp;}
"<="|">="	 {yylval->strVal = new std::string(yytext);return token::CompOp;}
"<" 						{yylval->strVal = new std::string(yytext);return token::less_than;}
">" 						{yylval->strVal = new std::string(yytext);return token::greater_than;}
","						{yylval->strVal = new std::string(yytext);return token::comma;}
";"						{yylval->strVal = new std::string(yytext);return token::semi_col;}
":"						{yylval->strVal = new std::string(yytext);return token::colon;}
"?"						{yylval->strVal = new std::string(yytext);return token::qstn_mark;}
"#"						{yylval->strVal = new std::string(yytext);return token::hash_sym;}


"int"							{yylval->strVal = new std::string(yytext);return token::INT;}
"bool"					{yylval->strVal = new std::string(yytext);return token::BOOL;}
"char" 						{yylval->strVal = new std::string(yytext);return token::CHAR;}
"uint" 						{yylval->strVal = new std::string(yytext);return token::UINT;}
"include"					{yylval->strVal = new std::string(yytext);return token::INCLUDE;}
"cout"						{yylval->strVal = new std::string(yytext);return token::COUT;}
"cin"							{yylval->strVal = new std::string(yytext);return token::CIN;}
"endl"						{yylval->strVal = new std::string(yytext);return token::ENDL;}

"def"							{yylval->strVal = new std::string(yytext);return token::DEF;}
"main"						{yylval->strVal = new std::string(yytext);return token::MAIN;}
true|false 				{yylval->strVal = new std::string(yytext);return token::BOOL_LIT;}

\'{char}\'              {yylval->strVal = new std::string(yytext);return token::CHAR_LIT;};
\"{str}\"               {yylval->strVal = new std::string(yytext);return token::STR_LIT;};


[-][0-9]+					{yylval->intVal = atoi(yytext);return token::INT_LIT;}
[0-9]+						{yylval->intVal = atoi(yytext);return token::UINT_LIT;}
"//".*						{yylloc->step();}

[a-zA-Z]+[0-9]*		{yylval->strVal = new std::string(yytext); return token::ID; }


[a-zA-Z]+[0-9]*[.][a-zA-Z]+	{yylval->strVal = new std::string(yytext); return token::LIB_ID; }


[ \t\r]+ 		{yylloc->step();}
\n		      {yylloc->lines(yyleng);
            yylloc->step();
            return token::NEWLINE;}




 /* pass all other characters up to bison */
.           {
                return static_cast<token_type>(*yytext);
            }


%% /*** Additional Code ***/

namespace decaf {

Scanner::Scanner(std::istream* in,
		         std::ostream* out)
: decafFlexLexer(in, out)
{
}

Scanner::~Scanner()
{
}

void Scanner::set_debug(bool b)
{
    yy_flex_debug = b;
}

}

/* This implementation of DecafFlexLexer::yylex() is required to fill the
 * vtable of the class DecafFlexLexer. We define the scanner's main yylex
 * function via YY_DECL to reside in the Scanner class instead. */

#ifdef yylex
#undef yylex
#endif

int decafFlexLexer::yylex()
{
    std::cerr << "in decafFlexLexer::yylex() !" << std::endl;
    return 0;
}

/* When the scanner receives an end-of-file indication from YY_INPUT, it then
 * checks the yywrap() function. If yywrap() returns false (zero), then it is
 * assumed that the function has gone ahead and set up `yyin' to point to
 * another input file, and scanning continues. If it returns true (non-zero),
 * then the scanner terminates, returning 0 to its caller. */

int decafFlexLexer::yywrap()
{
    return 1;
}
