/* $Id$ -*- mode: c++ -*- */
/** \file parser.yy Contains the example Bison parser source */

%{ /*** C/C++ Declarations ***/

#include <stdio.h>
#include <string>
#include <vector>
#include "ast.h"
#include "scanner.h"
#include "driver.h"


%}

/*** yacc/bison Declarations ***/

/* Require bison 2.3 or later */
%require "2.3"

/* add debug output code to generated parser. disable this for release
 * versions. */
%debug

/* start symbol is named "start" */
%start Start

/* write out a header file containing the token defines */
%defines

/* use newer C++ skeleton file */
%skeleton "lalr1.cc"

/* namespace to enclose parser in */
%name-prefix="decaf"

/* set the parser's class identifier */
%define "parser_class_name" "Parser"

/* keep track of the current position within the input */
%locations
%initial-action
{
    // initialize the initial location object
    @$.begin.filename = @$.end.filename = &driver.streamname;
};

/* The driver is passed by reference to the parser and to the scanner. This
 * provides a simple but effective pure interface, not relying on global
 * variables. */
%parse-param { class Driver& driver }

/* verbose error messages */
%error-verbose

/*** BEGIN EXAMPLE - Change the example grammar's tokens below ***/

%union{
  int intVal;
  std::string *strVal;
  class StartASTnode* start_astnode;
  class LibMultASTnode* libmult_astnode;
  class LibASTnode* lib_astnode;
  class LibNameASTnode* libname_astnode;
  class GlobalDeclASTnode* globaldecl_astnode;
  class MethodDeclMultASTnode* methoddeclmult_astnode;
  class MethodDeclASTnode* methoddecl_astnode;
  class ArgsMultASTnode* argsmult_astnode;
  class ArgASTnode* arg_astnode;
  class CodeASTnode* code_astnode;

  class StatMultASTnode* statmult_astnode;
  class VarDeclMultASTnode* vardeclmult_astnode;
  class VarDeclASTnode* vardecl_astnode;
  class IdMultASTnode* idmult_astnode;
  class DeclASTnode* decl_astnode;
  class LocationASTnode* location_astnode;
  class MethodCallASTnode* methodcall_astnode;
  class ExprMultASTnode* exprmult_astnode;
  class StatASTnode* stat_astnode;
  class AssignStatMultASTnode* assignstatmult_astnode;

  class AssignStatASTnode* assignstat_astnode;
  class InputsASTnode* inputs_astnode;
  class OutputsASTnode* outputs_astnode;
  class OutfileASTnode* outfile_astnode;
  class LoopASTnode* loop_astnode;
  class WhileLoopASTnode* whileloop_astnode;
  class ForLoopASTnode* forloop_astnode;
  class IfStatASTnode* ifstat_astnode;
  class ElseifStatASTnode* elseifstat_astnode;
  class ElseStatASTnode* elsestat_astnode;

  class ExprASTnode* expr_astnode;
  class TernaryASTnode* ternary_astnode;
  class OpASTnode* op_astnode;
  class ArithOpASTnode* arith_astnode;
  class LiteralASTnode* literal_astnode;
  class TypeASTnode* type_astnode;
  class AssignOpASTnode* assignop_astnode;

}

%type <start_astnode> Start
%type <libmult_astnode> Libraries_mult
%type <lib_astnode> Library
%type <libname_astnode> LibName
%type <globaldecl_astnode> GlobalDecl
%type <methoddeclmult_astnode> MethodDecl_mult
%type <methoddecl_astnode> MethodDecl
%type <argsmult_astnode> Args_mult
%type <arg_astnode> Arg
%type <code_astnode> Code

%type <statmult_astnode> Stat_mult
%type <vardeclmult_astnode> VarDecl_mult
%type <vardecl_astnode> VarDecl
%type <idmult_astnode> id_mult
%type <decl_astnode> Decl
%type <location_astnode> location
%type <methodcall_astnode> method_call
%type <exprmult_astnode> MultExpr
%type <stat_astnode> Stat
%type <assignstatmult_astnode> AssignStat_mult

%type <assignstat_astnode> AssignStat
%type <inputs_astnode> Inputs
%type <outputs_astnode> Outputs
%type <outfile_astnode> OutFile
%type <loop_astnode> Loop
%type <whileloop_astnode> while_loop
%type <forloop_astnode> for_loop
%type <ifstat_astnode> if_stat
%type <elseifstat_astnode> elseif_stat
%type <elsestat_astnode> else_stat

%type <expr_astnode> Expr
%type <ternary_astnode> Ternary
%type <op_astnode> Op
%type <arith_astnode> ArithOp
%type <literal_astnode> literal
%type <type_astnode> Type
%type <assignop_astnode> AssignOp

//%destructor { delete $$; } expr

 /*** END EXAMPLE - Change the example grammar's tokens above ***/

%{

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex

%}
%token END 0
%token NEWLINE
%token <strVal>plus_op
%token <strVal>minus_op
%token <strVal>div_op
%token <strVal>mul_op
%token <strVal>mod_op
%token <strVal>CompOp
%token <strVal>EqOp
%token <strVal>plus_eq
%token <strVal>minus_eq
%token <strVal>eql
%token <strVal> lft_brac
%token <strVal>lft_sbrac
%token <strVal>lft_fbrac
%token <strVal>rgt_brac
%token <strVal>rgt_sbrac
%token <strVal>rgt_fbrac
%token <strVal> void_stmt
%token <strVal>if_stmt
%token <strVal>elseif_stmt
%token <strVal>else_stmt
%token <strVal>break_stmt
%token <strVal> for_stmt
%token <strVal>while_stmt
%token <strVal>ret_stmt
%token <strVal>cont_stmt
%token <strVal>less_than
%token <strVal>greater_than
%token <strVal>hash_sym
%token <strVal> cond_and
%token <strVal>cond_or
%token <strVal>not_stmt
%token <strVal>comma
%token <strVal>semi_col
%token <strVal>colon
%token <strVal>qstn_mark
%token <strVal>STR_LIT
%token <strVal> INT
%token <strVal>BOOL
%token <strVal>CHAR
%token <strVal>UINT

%token <intVal>INT_LIT
%token <intVal>UINT_LIT

%token <strVal>BOOL_LIT
%token <strVal>CHAR_LIT
%token <strVal>LIB_ID
%token <strVal>INCLUDE
%token <strVal> ID
%token <strVal>DEF
%token <strVal>MAIN
%token <strVal>double_less
%token <strVal>double_greater
%token <strVal>CIN
%token <strVal>COUT
%token <strVal>ENDL


%left less_than greater_than
%left qstn_mark colon
%left cond_or cond_and
%left EqOp
%left CompOp
%left plus_op minus_op
%left mul_op div_op mod_op
%left not_stmt
%left CIN COUT

%left '?'
%left '+' '-'
%left '*' '/'


%%
Start : Libraries_mult GlobalDecl MethodDecl_mult MAIN lft_brac rgt_brac Code{$$ = new StartASTnode($1,$2,$3,$7);driver.ast.pRoot = $$;};

Libraries_mult :  {$$ = new LibMultASTnode();}
        | Libraries_mult Library {$$=$1;$$->push_library($2);};

Library :  hash_sym INCLUDE less_than LibName greater_than{$$ = new LibASTnode($4);};

LibName : ID {$$ = new LibNameASTnode("Normal", *$1);}
    | LIB_ID {$$ = new LibNameASTnode("dotHfile", *$1);};

GlobalDecl : {$$ = new GlobalDeclASTnode();}
      | VarDecl_mult VarDecl {$$ = new GlobalDeclASTnode($1, $2);};

MethodDecl_mult : {$$ = new MethodDeclMultASTnode();}
        | MethodDecl_mult MethodDecl {$$=$1;$$->push_method($2);};

MethodDecl : DEF ID lft_brac Args_mult rgt_brac Code{$$ = new MethodDeclASTnode(*$2,$4,$6);};

Args_mult : Arg {$$ = new ArgsMultASTnode();$$->push_arg($1);}
      | Args_mult comma Arg{$$=$1;$$->push_arg($3);};

Arg : Type location{$$ = new ArgASTnode($1, $2);};

Code : lft_fbrac Stat_mult rgt_fbrac {$$ = new CodeASTnode($2);};

Stat_mult : {$$ = new StatMultASTnode();}
      | Stat_mult Stat {$$=$1;$$->push_stat($2);};

VarDecl_mult : {$$ = new VarDeclMultASTnode();}
      | VarDecl_mult VarDecl {$$=$1;$$->push_vardecl($2);};

VarDecl : Type id_mult semi_col{$$ = new VarDeclASTnode($1, $2);};

id_mult : Decl {$$ = new IdMultASTnode();$$->push_decl($1);}
        | id_mult comma Decl {$$=$1;$$->push_decl($3);};

Decl : location {$$ = new DeclASTnode($1);}
      | location AssignOp Expr {$$ = new DeclASTnode($1, $2, $3);};

location : ID {$$ = new LocationASTnode("Normal", *$1);}
        | ID lft_sbrac Expr rgt_sbrac {$$ = new LocationASTnode("1D", *$1, $3);}
        | ID lft_sbrac Expr rgt_sbrac lft_sbrac Expr rgt_sbrac {$$ = new LocationASTnode("2D", *$1, $3, $6);}
        ;

method_call : ID lft_brac MultExpr rgt_brac {$$ = new MethodCallASTnode(*$1, $3);};

MultExpr: Expr {$$ = new ExprMultASTnode();$$->push_expr($1);}
      | MultExpr comma Expr {$$=$1;$$->push_expr($3);}
      ;

Stat : method_call semi_col {$$ = new StatASTnode($1);}
      | if_stat {$$ = new StatASTnode($1);}
      | Loop {$$ = new StatASTnode($1);}
      | ret_stmt Expr semi_col {$$ = new StatASTnode(*$1,$2);}
      | break_stmt semi_col {$$ = new StatASTnode(*$1);}
      | cont_stmt semi_col {$$ = new StatASTnode(*$1);}
      | AssignStat_mult semi_col {$$ = new StatASTnode($1);}
      | CIN Inputs semi_col {$$ = new StatASTnode(*$1,$2);}
      | COUT Outputs semi_col {$$ = new StatASTnode(*$1,$2);}
      | VarDecl {$$ = new StatASTnode($1);}
    ;

AssignStat_mult : AssignStat {$$ = new AssignStatMultASTnode();$$->push_assignstat($1);}
          | AssignStat_mult comma AssignStat {$$=$1;$$->push_assignstat($3);};

AssignStat : location AssignOp Expr {$$ = new AssignStatASTnode($1, $2, $3);}
          ;

Inputs : {$$ = new InputsASTnode();}
      | Inputs double_greater ID {$$=$1;$$->push_input(*$3);};

Outputs : {$$ = new OutputsASTnode();}
      | Outputs double_less OutFile {$$=$1;$$->push_output($3);};

OutFile : ID {$$ = new OutfileASTnode("id", *$1);}
      | STR_LIT {$$ = new OutfileASTnode("string", *$1);}
      | ENDL {$$ = new OutfileASTnode("newline", *$1);};

Loop : for_loop {$$ = new LoopASTnode("forloop", $1);}
      | while_loop {$$ = new LoopASTnode("whileloop", $1);}
      ;

while_loop : while_stmt lft_brac Expr rgt_brac Code {$$ = new WhileLoopASTnode($3, $5);};

for_loop : for_stmt lft_brac Stat Expr semi_col AssignStat_mult rgt_brac Code {$$ = new ForLoopASTnode($3, $4, $6, $8);};

if_stat: if_stmt lft_brac Expr rgt_brac Code elseif_stat else_stat {$$ = new IfStatASTnode($3, $5, $6, $7);};

elseif_stat : {$$ = new ElseifStatASTnode();}
      | elseif_stmt lft_brac Expr rgt_brac Code {$$ = new ElseifStatASTnode($3, $5);};

else_stat : {$$ = new ElseStatASTnode();}
    | else_stmt Code {$$ = new ElseStatASTnode($2);};

Expr : location {$$ = new ExprASTnode($1);}
      | method_call {$$ = new ExprASTnode($1);}
      | literal {$$ = new ExprASTnode($1);}
      | lft_brac Expr rgt_brac {$$ = new ExprASTnode(*$2);}
      | minus_op Expr {$$ = new ExprASTnode(*$1,$2);}
      | not_stmt Expr {$$ = new ExprASTnode(*$1,$2);}
      | Ternary {$$ = new ExprASTnode($1);}
      | Expr Op Expr {$$ = new ExprASTnode($1,$2, $3);}
      ;

Ternary : Expr qstn_mark Expr colon Expr {$$ = new TernaryASTnode($1, $3, $5);};

Op : ArithOp {$$ = new OpASTnode($1);}
    | CompOp {$$ = new OpASTnode(*$1);}
    | EqOp {$$ = new OpASTnode(*$1);}
    | cond_or {$$ = new OpASTnode(*$1);}
    | cond_and {$$ = new OpASTnode(*$1);}
    | less_than {$$ = new OpASTnode(*$1);}
    | greater_than {$$ = new OpASTnode(*$1);}
      ;

ArithOp: plus_op {$$ = new ArithOpASTnode(*$1);}
      | minus_op {$$ = new ArithOpASTnode(*$1);}
      | mul_op {$$ = new ArithOpASTnode(*$1);}
      | div_op {$$ = new ArithOpASTnode(*$1);}
      | mod_op {$$ = new ArithOpASTnode(*$1);}
      ;

literal :  INT_LIT {$$ = new LiteralASTnode("int", $1);}
          | CHAR_LIT {$$ = new LiteralASTnode("char", *$1);}
          | UINT_LIT {$$ = new LiteralASTnode("uint", $1);}
          | BOOL_LIT {$$ = new LiteralASTnode("bool", *$1);}
          | STR_LIT {$$ = new LiteralASTnode("str", *$1);}
          ;

Type : INT {$$ = new TypeASTnode(*$1);}
      | CHAR {$$ = new TypeASTnode(*$1);}
      | BOOL {$$ = new TypeASTnode(*$1);}
      | UINT {$$ = new TypeASTnode(*$1);}
      ;

AssignOp : eql {$$ = new AssignOpASTnode(*$1);}
        | plus_eq {$$ = new AssignOpASTnode(*$1);}
        | minus_eq {$$ = new AssignOpASTnode(*$1);}
        ;

%%

void decaf::Parser::error(const Parser::location_type& l,
			    		  const std::string& m)
{
    driver.error(l, m);
}
