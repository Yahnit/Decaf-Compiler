#ifndef INTERPRETOR_H
#define INTERPRETOR_H

#include "ast.h"

#include<bits/stdc++.h>
using namespace std;

map<string, double> mp;
stack<string> op_stk;
stack<string> var_stk;
stack<double> num_stk;
stack<int> ifelse_stk;
map<string, vector<string> > method_map;

class Interpretor: public ASTvisitor{
  public:

    virtual void visit(StartASTnode& node)
    {

        node.getLibraryMult()->accept(*this);
        node.getGlobalDecl()->accept(*this);
        node.getMethodDeclMult()->accept(*this);
        node.getCode()->accept(*this);

    }

    virtual void visit(LibMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getLibMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    virtual void visit(LibASTnode& node)
    {

        node.getLibName()->accept(*this);

    }

    virtual void visit(LibNameASTnode& node)
    {


    }

    virtual void visit(GlobalDeclASTnode& node)
    {

        if(node.getVarDecl() != NULL && node.getVarDeclMult() != NULL){
          node.getVarDeclMult()->accept(*this);
          node.getVarDecl()->accept(*this);
        }

    }

    virtual void visit(MethodDeclMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getMethodDeclMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    map<string, MethodDeclASTnode*> method_ast_node;
    virtual void visit(MethodDeclASTnode& node)
    {
        string method_name = node.getId();
        var_stk.push(method_name);

        node.getArgsMult()->accept(*this);
        vector<string> vect;
        while(var_stk.top() != method_name){
          vect.push_back(var_stk.top());
          var_stk.pop();
          num_stk.pop();
        }
        var_stk.pop();
        method_map[method_name] = vect;
        method_ast_node[method_name] = &node;

    }

    virtual void visit(ArgsMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getArgsMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }


    virtual void visit(ArgASTnode& node)
    {

        node.getType()->accept(*this);
        node.getLocation()->accept(*this);

    }

    virtual void visit(CodeASTnode& node)
    {

        node.getStatMult()->accept(*this);

    }

    virtual void visit(StatMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getStatMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    virtual void visit(VarDeclMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getVarDeclMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    virtual void visit(VarDeclASTnode& node)
    {

        node.getType()->accept(*this);
        node.getIdMult()->accept(*this);

    }

    virtual void visit(IdMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getIdMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    virtual void visit(DeclASTnode& node)
    {

        if(node.getExpr() != NULL){
          node.getLocation()->accept(*this);
          node.getAssignOp()->accept(*this);
          node.getExpr()->accept(*this);

          node.getLocation()->accept(*this);
          string varname = var_stk.top();
          var_stk.pop();
          double varval = num_stk.top();
          num_stk.pop();

          node.getAssignOp()->accept(*this);
          string assgn_op = op_stk.top();
          op_stk.pop();

          node.getExpr()->accept(*this);
          double expr_val = num_stk.top();
          num_stk.pop();

          if(assgn_op == "=")
            mp[varname] = expr_val;
          if(assgn_op == "+=")
            mp[varname] = varval + expr_val;
          if(assgn_op == "-=")
            mp[varname] = varval - expr_val;
        }
        else
        {
          node.getLocation()->accept(*this);
          var_stk.pop();
          num_stk.pop();
        }

    }

    virtual void visit(LocationASTnode& node)
    {

        if(node.getType() == "Normal"){
          string varname = node.getId();
          if(mp.find(varname) != mp.end()){
            num_stk.push(mp.find(varname)->second);
            var_stk.push(varname);
          }
          else{
            num_stk.push(0);
            var_stk.push(varname);
          }
        }

        else if(node.getType() == "1D"){
          node.getExpr1()->accept(*this);
        }

        else{
          node.getExpr1()->accept(*this);
          node.getExpr2()->accept(*this);

        }

    }

    virtual void visit(MethodCallASTnode& node)
    {
        string method_name = node.getId();
        node.getExprMult()->accept(*this);

        vector<string> args = method_map[method_name];
        for(int i=0;i<args.size();i++){
          mp[args[i]] = num_stk.top();
          num_stk.pop();
        }
        MethodDeclASTnode* node_methoddecl = method_ast_node[method_name];
        node_methoddecl->getCode()->accept(*this);
    }

    virtual void visit(ExprMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getExprMult();

        for(int i=0;i<vect.size();i++){
            (vect[i])->accept(*this);
          }

    }

    virtual void visit(StatASTnode& node)
    {

        if(node.getExpr() == NULL){
        }

        else if(node.getStr() == "\0"){
          node.getExpr()->accept(*this);
        }

        else{
          node.getExpr()->accept(*this);
        }

    }


    virtual void visit(AssignStatASTnode& node)
    {

        node.getLocation()->accept(*this);
        string varname = var_stk.top();
        var_stk.pop();
        double varval = num_stk.top();
        num_stk.pop();

        node.getAssignOp()->accept(*this);
        string assgn_op = op_stk.top();
        op_stk.pop();

        node.getExpr()->accept(*this);
        double expr_val = num_stk.top();
        num_stk.pop();

        if(assgn_op == "=")
          mp[varname] = expr_val;
        if(assgn_op == "+=")
          mp[varname] = varval + expr_val;
        if(assgn_op == "-=")
          mp[varname] = varval - expr_val;

    }

    virtual void visit(AssignStatMultASTnode& node)
    {
        vector<ASTnode *> vect = node.getAssignStatMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }

    virtual void visit(InputsASTnode& node)
    {
        vector<string> vect = node.getInputs();

    }

    virtual void visit(OutputsASTnode& node)
    {
        vector<ASTnode *> vect = node.getOutputs();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

    }


    virtual void visit(OutfileASTnode& node)
    {
        if(node.getType() == "string")
          std::cout << node.getVal() << " ";
        if(node.getType() == "id")
          std::cout << mp[node.getVal()] << " ";
        if(node.getType() == "newline")
          std::cout << endl;
    }

    virtual void visit(LoopASTnode& node)
    {

        node.getLoop()->accept(*this);

    }

    virtual void visit(WhileLoopASTnode& node)
    {
        while(1){
          node.getExpr()->accept(*this);
          double val = num_stk.top();
          num_stk.pop();
          if(val == 0)
            break;
            node.getCode()->accept(*this);
        }

    }

    virtual void visit(ForLoopASTnode& node)
    {
        node.getStat()->accept(*this);


        while(1){
          node.getExpr()->accept(*this);
          double val = num_stk.top();
          num_stk.pop();

          if(val == 0)
            break;
          node.getCode()->accept(*this);
          node.getAssignStatMult()->accept(*this);
        }

    }

    virtual void visit(IfStatASTnode& node)
    {

        node.getExpr()->accept(*this);
        double val = num_stk.top();
        num_stk.pop();

        if(val == 1)
          node.getCode()->accept(*this);
        else{
          node.getElseifStat()->accept(*this);
          double val1 = ifelse_stk.top();
          ifelse_stk.pop();
          if(val1 == 0)
            node.getElseStat()->accept(*this);
        }
    }

    virtual void visit(ElseifStatASTnode& node)
    {

        if(node.getExpr() != NULL){
          node.getExpr()->accept(*this);
          double val = num_stk.top();
          num_stk.pop();
          if(val == 1){
            node.getCode()->accept(*this);
            ifelse_stk.push(1);
          }
          else
            ifelse_stk.push(0);
        }
        else
          ifelse_stk.push(0);
    }

    virtual void visit(ElseStatASTnode& node)
    {
        if(node.getCode() != NULL){
          node.getCode()->accept(*this);
        }

    }

    virtual void visit(ExprASTnode& node)
    {

        if(node.getExpr1() != NULL && node.getExpr2() != NULL){
          node.getExpr1()->accept(*this);
          node.getOp()->accept(*this);
          node.getExpr2()->accept(*this);
          double val2 = num_stk.top();
          num_stk.pop();
          double val1 = num_stk.top();
          num_stk.pop();
          string op = op_stk.top();
          op_stk.pop();


          double val;
          if(op == "+")
            val = (double)(val1 + val2);
          if(op == "-")
            val = (double)(val1 - val2);
          if(op == "*")
            val =(double)( val1 * val2);
          if(op == "/")
            val = (double)(val1 / val2);
          if(op == "%")
            val = (double)((int)val1 % (int)val2);
          if(op == "<")
            val = (double)(val1 < val2);
          if(op == "<=")
            val = (double)(val1 <= val2);
          if(op == ">")
            val = (double)(val1 > val2);
          if(op == ">=")
            val = (double)(val1 >= val2);
          if(op == "&&")
            val = (double)(val1 && val2);
          if(op == "||")
            val = (double)(val1 || val2);
          if(op == "!=")
            val = (double)(val1 != val2);
          if(op == "==")
            val = (double)(val1 == val2);

          num_stk.push(val);
        }

        else if(node.getStr() == "\0"){
          node.getExpr1()->accept(*this);
        }

        else{
          node.getExpr1()->accept(*this);
          double val = num_stk.top();
          num_stk.pop();

          string op = node.getStr();
          if(op == "!")
            num_stk.push(!val);


          if(op == "-")
            num_stk.push(-val);
        }

    }

    virtual void visit(TernaryASTnode& node)
    {

        node.getExpr1()->accept(*this);
        double val = num_stk.top();
        num_stk.pop();

        if(val == 1){
          node.getExpr2()->accept(*this);
        }
        else{
          node.getExpr3()->accept(*this);
        }

    }

    virtual void visit(OpASTnode& node)
    {

        if(node.getArithOp() != NULL){
            node.getArithOp()->accept(*this);
        }
        else{
            string op = node.getOp();
            op_stk.push(op);
        }

    }


    virtual void visit(ArithOpASTnode& node)
    {
        string op = node.getOp();
        op_stk.push(op);

    }

    virtual void visit(LiteralASTnode& node)
    {
        if(node.getType() == "int" || node.getType() == "uint"){
          double val = (double)node.getIntVal();
          num_stk.push(val);
        }

        else{
      }

    }

    virtual void visit(TypeASTnode& node)
    {
    }

    virtual void visit(AssignOpASTnode& node)
    {
        string op = node.getType();
        op_stk.push(op);
    }

};

#endif /* POSTFIXVISITOR_H */
