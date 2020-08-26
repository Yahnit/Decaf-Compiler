%{
  #include <iostream>
  #include<string>
  using namespace std;
  #include<bits/stdc++.h>

  // stuff from flex that bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  void yyerror(const char *s);
  int production = 1;
%}


%token plus_op minus_op div_op mul_op mod_op CompOp EqOp plus_eq minus_eq eql
%token lft_brac lft_sbrac lft_fbrac rgt_brac rgt_sbrac rgt_fbrac
%token void_stmt if_stmt elseif_stmt else_stmt break_stmt
%token for_stmt while_stmt ret_stmt cont_stmt less_than greater_than hash_sym
%token cond_and cond_or not_stmt comma semi_col colon qstn_mark STR_LIT
%token INT BOOL CHAR UINT INT_LIT UINT_LIT BOOL_LIT CHAR_LIT LIB_ID INCLUDE
%token ID DEF MAIN double_less double_greater CIN COUT ENDL

%start Start

%left less_than greater_than
%left qstn_mark colon
%left cond_or cond_and
%left EqOp
%left CompOp
%left plus_op minus_op
%left mul_op div_op mod_op
%left not_stmt
%left CIN COUT

%%
Start : Libraries_mult GlobalDecl MethodDecl_mult MAIN lft_brac rgt_brac Code;

Libraries_mult : | Libraries_mult Library;

Library :  hash_sym INCLUDE less_than LibName greater_than;

LibName : ID | LIB_ID

GlobalDecl : | VarDecl_mult VarDecl;

MethodDecl_mult : | MethodDecl_mult MethodDecl;

MethodDecl :  DEF ID lft_brac Args_mult rgt_brac Code;

Args_mult : Arg | Args_mult comma Arg;

Arg : Type location;

Code : lft_fbrac Stat_mult rgt_fbrac;

Stat_mult : | Stat_mult Stat;

VarDecl_mult : | VarDecl_mult VarDecl;

VarDecl : Type id_mult semi_col;

id_mult : Decl | id_mult comma Decl;

Decl : location | location AssignOp Expr;

location : ID
        | ID lft_sbrac Expr rgt_sbrac
        | ID lft_sbrac Expr rgt_sbrac lft_sbrac Expr rgt_sbrac
        ;

method_call : ID lft_brac MultExpr rgt_brac;

MultExpr: Expr
      | MultExpr comma Expr
      ;

Stat : method_call semi_col
      | if_stat
      | Loop
      | ret_stmt Expr semi_col
      | break_stmt semi_col
      | cont_stmt semi_col
      | AssignStat_mult semi_col
      | CIN Inputs semi_col
      | COUT Outputs semi_col
      | VarDecl
    ;

AssignStat_mult : AssignStat
            | AssignStat_mult comma AssignStat;
          ;

AssignStat : location AssignOp Expr;

Inputs : | Inputs double_greater ID;

Outputs : | Outputs double_less OutFile;

OutFile : ID | STR_LIT | ENDL;

Loop : for_loop
      | while_loop
      ;

while_loop : while_stmt lft_brac Expr rgt_brac Code;

for_loop : for_stmt lft_brac Stat Expr semi_col AssignStat_mult rgt_brac Code;

if_stat: if_stmt lft_brac Expr rgt_brac Code elseif_stat else_stat;

elseif_stat : | elseif_stmt lft_brac Expr rgt_brac Code;

else_stat : | else_stmt Code;

Expr : location
      | method_call
      | literal
      | lft_brac Expr rgt_brac
      | minus_op Expr
      | not_stmt Expr
      | Ternary
      | Expr Op Expr
      ;

Ternary : Expr qstn_mark Expr colon Expr;

Op : ArithOp
    | CompOp
    | EqOp
    | cond_or
    | cond_and
    | less_than
    | greater_than
      ;

ArithOp: plus_op
      | minus_op
      | mul_op
      | div_op
      | mod_op
      ;

literal :  INT_LIT
          | CHAR_LIT
          | UINT_LIT
          | BOOL_LIT
          | STR_LIT
          ;

Type : INT
      | CHAR
      | BOOL
      | UINT
      ;

AssignOp : eql
        | plus_eq
        | minus_eq
        ;


%%

void yyerror(const char *s)
{
        fprintf(stderr, "error: %s\n", s);
        cout << "\nSorry, There seems to be an error :( \n";
        exit(1);
}


int main(int argc, char **argv)
{
        yyparse();
        printf("Parsing Done Succesfully!\n");
}
