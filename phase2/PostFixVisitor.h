#ifndef POSTFIXVISITOR_H
#define POSTFIXVISITOR_H

#include "ast.h"

class PostFixVisitor: public ASTvisitor{
  public:

    virtual void visit(StartASTnode& node)
    {
        std::cout << "<Start>" << endl;

        node.getLibraryMult()->accept(*this);
        node.getGlobalDecl()->accept(*this);
        node.getMethodDeclMult()->accept(*this);
        node.getCode()->accept(*this);

        std::cout << "</Start>" << endl;
    }

    virtual void visit(LibMultASTnode& node)
    {
        std::cout << "<Libraries>" << endl;
        vector<ASTnode *> vect = node.getLibMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Libraries>" << endl;
    }

    virtual void visit(LibASTnode& node)
    {
        std::cout << "<Library>" << endl;

        node.getLibName()->accept(*this);

        std::cout << "</Library>" << endl;
    }

    virtual void visit(LibNameASTnode& node)
    {
        std::cout << "<Library Name>" << endl;

        std::cout << node.getLibName() << endl;

        std::cout << "</Library Name>" << endl;
    }

    virtual void visit(GlobalDeclASTnode& node)
    {
        std::cout << "<Global Declarations>" << endl;

        if(node.getVarDecl() != NULL && node.getVarDeclMult() != NULL){
          node.getVarDeclMult()->accept(*this);
          node.getVarDecl()->accept(*this);
        }

        std::cout << "</Global Declarations>" << endl;
    }

    virtual void visit(MethodDeclMultASTnode& node)
    {
        std::cout << "<Method Declarations>" << endl;
        vector<ASTnode *> vect = node.getMethodDeclMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Method Declarations>" << endl;
    }

    virtual void visit(MethodDeclASTnode& node)
    {
        std::cout << "<Method Declaration>" << endl;

        std:: cout << "<Method Name>" << endl;
        std:: cout << node.getId( )<< endl;
        std:: cout << "</Method Name>" << endl;

        node.getArgsMult()->accept(*this);
        node.getCode()->accept(*this);

        std::cout << "</Method Declaration>" << endl;
    }

    virtual void visit(ArgsMultASTnode& node)
    {
        std::cout << "<Arguments>" << endl;
        vector<ASTnode *> vect = node.getArgsMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Arguments>" << endl;
    }


    virtual void visit(ArgASTnode& node)
    {
        std::cout << "<Argument>" << endl;

        node.getType()->accept(*this);
        node.getLocation()->accept(*this);

        std::cout << "</Argument>" << endl;
    }

    virtual void visit(CodeASTnode& node)
    {
        std::cout << "<Code>" << endl;

        node.getStatMult()->accept(*this);

        std::cout << "</Code>" << endl;
    }

    virtual void visit(StatMultASTnode& node)
    {
        std::cout << "<Statements>" << endl;
        vector<ASTnode *> vect = node.getStatMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Statements>" << endl;
    }

    virtual void visit(VarDeclMultASTnode& node)
    {
        std::cout << "<Variable Declarations>" << endl;
        vector<ASTnode *> vect = node.getVarDeclMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Variable Declarations>" << endl;
    }

    virtual void visit(VarDeclASTnode& node)
    {
        std::cout << "<Variable Declaration>" << endl;

        node.getType()->accept(*this);
        node.getIdMult()->accept(*this);

        std::cout << "</Variable Declaration>" << endl;
    }

    virtual void visit(IdMultASTnode& node)
    {
        std::cout << "<Multiple Ids>" << endl;
        vector<ASTnode *> vect = node.getIdMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Multiple Ids>" << endl;
    }

    virtual void visit(DeclASTnode& node)
    {
        std::cout << "<Declaration>" << endl;

        if(node.getExpr() != NULL){
          node.getLocation()->accept(*this);
          node.getAssignOp()->accept(*this);
          node.getExpr()->accept(*this);
        }
        else
        {
          node.getLocation()->accept(*this);
        }

        std::cout << "</Declaration>" << endl;
    }

    virtual void visit(LocationASTnode& node)
    {
        std::cout << "<Location>" << endl;

        if(node.getType() == "Normal"){
          std::cout << node.getId() << endl;
        }

        else if(node.getType() == "1D"){
          std::cout << node.getId() << endl;
          node.getExpr1()->accept(*this);
        }

        else{
          std::cout << node.getId() << endl;
          node.getExpr1()->accept(*this);
          node.getExpr2()->accept(*this);

        }

        std::cout << "</Location>" << endl;
    }

    virtual void visit(MethodCallASTnode& node)
    {
        std::cout << "<Method Call>" << endl;

        std::cout << "<Method Name>" << endl;
        std::cout << node.getId() << endl;
        std::cout << "</Method Name>" << endl;

        node.getExprMult()->accept(*this);

        std::cout << "</Method Call>" << endl;
    }

    virtual void visit(ExprMultASTnode& node)
    {
        std::cout << "<Expressions>" << endl;
        vector<ASTnode *> vect = node.getExprMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Expressions>" << endl;
    }

    virtual void visit(StatASTnode& node)
    {
        std::cout << "<Statement>" << endl;

        if(node.getExpr() == NULL){
          std::cout << node.getStr() << endl;
        }

        else if(node.getStr() == "\0"){
          node.getExpr()->accept(*this);
        }

        else{
          std::cout << node.getStr() << endl;
          node.getExpr()->accept(*this);
        }

        std::cout << "</Statement>" << endl;
    }


    virtual void visit(AssignStatASTnode& node)
    {
        std::cout << "<Assignment Statement>" << endl;

        node.getLocation()->accept(*this);
        node.getAssignOp()->accept(*this);
        node.getExpr()->accept(*this);

        std::cout << "</Assignment Statement>" << endl;
    }

    virtual void visit(AssignStatMultASTnode& node)
    {
        std::cout << "<Assignment Statements>" << endl;
        vector<ASTnode *> vect = node.getAssignStatMult();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Assignment Statements>" << endl;
    }

    virtual void visit(InputsASTnode& node)
    {
        std::cout << "<Inputs>" << endl;
        vector<string> vect = node.getInputs();

        for(int i=0;i<vect.size();i++)
            std:: cout << vect[i] << endl;

        std::cout << "</Inputs>" << endl;
    }

    virtual void visit(OutputsASTnode& node)
    {
        std::cout << "<Outputs>" << endl;
        vector<ASTnode *> vect = node.getOutputs();

        for(int i=0;i<vect.size();i++)
            (vect[i])->accept(*this);

        std::cout << "</Outputs>" << endl;
    }


    virtual void visit(OutfileASTnode& node)
    {
        std::cout << "<Outfile>" << endl;

        std::cout << "<Type>" << endl;
        std::cout << node.getType() << endl;
        std::cout << "</Type>" << endl;

        std::cout << "<Name>" << endl;
        std::cout << node.getVal() << endl;
        std::cout << "</Name>" << endl;


        std::cout << "</Outfile>" << endl;
    }

    virtual void visit(LoopASTnode& node)
    {
        std::cout << "<Loop>" << endl;

        std::cout << "<Type>" << endl;
        std::cout << node.getType() << endl;
        std::cout << "</Type>" << endl;

        node.getLoop()->accept(*this);

        std::cout << "</Loop>" << endl;
    }

    virtual void visit(WhileLoopASTnode& node)
    {
        std::cout << "<While Loop>" << endl;

        node.getExpr()->accept(*this);
        node.getCode()->accept(*this);

        std::cout << "</While Loop>" << endl;
    }

    virtual void visit(ForLoopASTnode& node)
    {
        std::cout << "<For Loop>" << endl;

        node.getExpr()->accept(*this);
        node.getStat()->accept(*this);
        node.getAssignStatMult()->accept(*this);
        node.getCode()->accept(*this);

        std::cout << "</For Loop>" << endl;
    }

    virtual void visit(IfStatASTnode& node)
    {
        std::cout << "<If Statement>" << endl;

        node.getExpr()->accept(*this);
        node.getCode()->accept(*this);
        node.getElseifStat()->accept(*this);
        node.getElseStat()->accept(*this);

        std::cout << "</If Statement>" << endl;
    }

    virtual void visit(ElseifStatASTnode& node)
    {
        std::cout << "<ElseIf Statement>" << endl;

        if(node.getExpr() != NULL){
          node.getExpr()->accept(*this);
          node.getCode()->accept(*this);
        }

        std::cout << "</ElseIf Statement>" << endl;
    }

    virtual void visit(ElseStatASTnode& node)
    {
        std::cout << "<Else Statement>" << endl;

        if(node.getCode() != NULL){
          node.getCode()->accept(*this);
        }

        std::cout << "</Else Statement>" << endl;
    }

    virtual void visit(ExprASTnode& node)
    {
        std::cout << "<Expression>" << endl;

        if(node.getExpr1() != NULL && node.getExpr2() != NULL){
          node.getExpr1()->accept(*this);
          node.getOp()->accept(*this);
          node.getExpr2()->accept(*this);
        }

        else if(node.getExpr1() == NULL){
          std::cout << node.getStr() << endl;
        }

        else if(node.getStr() == "\0"){
          node.getExpr1()->accept(*this);
        }

        else{
          std::cout << node.getStr() << endl;
          node.getExpr1()->accept(*this);
        }

        std::cout << "</Expression>" << endl;
    }

    virtual void visit(TernaryASTnode& node)
    {
        std::cout << "<Ternary Expr>" << endl;

        node.getExpr1()->accept(*this);
        node.getExpr2()->accept(*this);
        node.getExpr3()->accept(*this);

        std::cout << "</Ternary Expr>" << endl;
    }

    virtual void visit(OpASTnode& node)
    {
        std::cout << "<Operator>" << endl;

        if(node.getArithOp() != NULL){
            node.getArithOp()->accept(*this);
        }
        else{
            std::cout << node.getOp() << endl;
        }

        std::cout << "</Operator>" << endl;
    }


    virtual void visit(ArithOpASTnode& node)
    {
        std::cout << "<Arithmetic Operator>" << endl;

        std::cout << node.getOp() << endl;

        std::cout << "</Arithmetic Operator>" << endl;
    }

    virtual void visit(LiteralASTnode& node)
    {
        std::cout << "<Literal>" << endl;

        std::cout << "<Type>" << endl;
        std::cout << node.getType() << endl;
        std::cout << "</Type>" << endl;

        if(node.getType() == "int" || node.getType() == "uint"){
          std::cout << "<Val>" << endl;
          std::cout << node.getIntVal() << endl;
          std::cout << "</Val>" << endl;
        }

        else{
          std::cout << "<Val>" << endl;
          std::cout << node.getStrVal() << endl;
          std::cout << "</Val>" << endl;
      }

        std::cout << "</Literal>" << endl;
    }

    virtual void visit(TypeASTnode& node)
    {
        std::cout << "<Data Type>" << endl;
        std::cout << node.getType() << endl;

        std::cout << "</Data Type>" << endl;
    }

    virtual void visit(AssignOpASTnode& node)
    {
        std::cout << "<Assignment Operator" << endl;
        std::cout << node.getType() << endl;
        std::cout << "</Assignment Operator>" << endl;
    }

};

#endif /* POSTFIXVISITOR_H */
