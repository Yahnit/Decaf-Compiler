#ifndef AST_H
#define AST_H

#include<iostream>
#include <string>
using namespace std;

class StartASTnode;
class LibMultASTnode;
class LibASTnode;
class LibNameASTnode;
class GlobalDeclASTnode;
class MethodDeclMultASTnode;
class MethodDeclASTnode;
class ArgsMultASTnode;
class ArgASTnode;
class CodeASTnode;

class StatMultASTnode;
class VarDeclMultASTnode;
class VarDeclASTnode;
class IdMultASTnode;
class DeclASTnode;
class LocationASTnode;
class MethodCallASTnode;
class ExprMultASTnode;
class StatASTnode;
class AssignStatMultASTnode;

class AssignStatASTnode;
class InputsASTnode;
class OutputsASTnode;
class OutfileASTnode;
class LoopASTnode;
class WhileLoopASTnode;
class ForLoopASTnode;
class IfStatASTnode;
class ElseifStatASTnode;
class ElseStatASTnode;

class ExprASTnode;
class TernaryASTnode;
class OpASTnode;
class ArithOpASTnode;
class LiteralASTnode;
class TypeASTnode;
class AssignOpASTnode;


class ASTvisitor
{
  public:
    virtual void visit(StartASTnode& node) = 0;
    virtual void visit(LibMultASTnode& node) = 0;
    virtual void visit(LibASTnode& node) = 0;
    virtual void visit(LibNameASTnode& node) = 0;
    virtual void visit(GlobalDeclASTnode& node) = 0;
    virtual void visit(MethodDeclMultASTnode& node) = 0;
    virtual void visit(MethodDeclASTnode& node) = 0;
    virtual void visit(ArgsMultASTnode& node) = 0;
    virtual void visit(ArgASTnode& node) = 0;
    virtual void visit(CodeASTnode& node) = 0;

    virtual void visit(StatMultASTnode& node) = 0;
    virtual void visit(VarDeclMultASTnode& node) = 0;
    virtual void visit(VarDeclASTnode& node) = 0;
    virtual void visit(IdMultASTnode& node) = 0;
    virtual void visit(DeclASTnode& node) = 0;
    virtual void visit(LocationASTnode& node) = 0;
    virtual void visit(MethodCallASTnode& node) = 0;
    virtual void visit(ExprMultASTnode& node) = 0;
    virtual void visit(StatASTnode& node) = 0;
    virtual void visit(AssignStatMultASTnode& node) = 0;

    virtual void visit(AssignStatASTnode& node) = 0;
    virtual void visit(InputsASTnode& node) = 0;
    virtual void visit(OutputsASTnode& node) = 0;
    virtual void visit(OutfileASTnode& node) = 0;
    virtual void visit(LoopASTnode& node) = 0;
    virtual void visit(WhileLoopASTnode& node) = 0;
    virtual void visit(ForLoopASTnode& node) = 0;
    virtual void visit(IfStatASTnode& node) = 0;
    virtual void visit(ElseifStatASTnode& node) = 0;
    virtual void visit(ElseStatASTnode& node) = 0;

    virtual void visit(ExprASTnode& node) = 0;
    virtual void visit(TernaryASTnode& node) = 0;
    virtual void visit(OpASTnode& node) = 0;
    virtual void visit(ArithOpASTnode& node) = 0;
    virtual void visit(LiteralASTnode& node) = 0;
    virtual void visit(TypeASTnode& node) = 0;
    virtual void visit(AssignOpASTnode& node) = 0;
};


class ASTnode
{
  public :
    virtual ~ASTnode()
    {
    }

    virtual void accept(ASTvisitor& V) = 0;
};


class StartASTnode : public ASTnode
{
    public:
      StartASTnode (ASTnode* LibraryMult,ASTnode* GlobalDecl, ASTnode* MethodDeclMult, ASTnode* Code)
    : LibraryMult(LibraryMult), GlobalDecl(GlobalDecl) , MethodDeclMult(MethodDeclMult) , Code(Code){}

    ASTnode* getLibraryMult()
    {
        return LibraryMult;
    }

    ASTnode* getGlobalDecl()
    {
        return GlobalDecl;
    }

    ASTnode* getMethodDeclMult()
    {
        return MethodDeclMult;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        ASTnode* LibraryMult;
        ASTnode* GlobalDecl;
        ASTnode* MethodDeclMult;
        ASTnode* Code;

};

class LibMultASTnode : public ASTnode
{
    public:
    LibMultASTnode ()
    {}

    void push_library(ASTnode* Lib)
    {
        LibMult.push_back(Lib);
        return;
    }

    vector<ASTnode*> getLibMult()
    {
        return LibMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> LibMult;
};


class LibASTnode : public ASTnode
{
    public:
      LibASTnode (ASTnode* LibName)
    : LibName(LibName){}

    ASTnode* getLibName()
    {
        return LibName;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        ASTnode* LibName;

};

class LibNameASTnode : public ASTnode
{
    public:
      LibNameASTnode (string Type, string LibName)
    : Type(Type), LibName(LibName){}

    string getType()
    {
        return Type;
    }

    string getLibName()
    {
        return LibName;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        string Type;
        string LibName;

};

class GlobalDeclASTnode : public ASTnode
{
    public:
      GlobalDeclASTnode (ASTnode* VarDeclMult, ASTnode* VarDecl)
    : VarDeclMult(VarDeclMult), VarDecl(VarDecl){}

    GlobalDeclASTnode ()
    {}

    ASTnode* getVarDeclMult()
    {
        return VarDeclMult;
    }

    ASTnode* getVarDecl()
    {
        return VarDecl;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* VarDeclMult = NULL;
      ASTnode* VarDecl = NULL;

};


class MethodDeclMultASTnode : public ASTnode
{
    public:
    MethodDeclMultASTnode ()
    {}

    void push_method(ASTnode* MethodDecl)
    {
        MethodDeclMult.push_back(MethodDecl);
        return;
    }

    vector<ASTnode*> getMethodDeclMult()
    {
        return MethodDeclMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> MethodDeclMult;
};

class MethodDeclASTnode : public ASTnode
{
    public:
      MethodDeclASTnode (string id, ASTnode* ArgsMult, ASTnode* Code)
    : id(id), ArgsMult(ArgsMult), Code(Code){}

    string getId()
    {
        return id;
    }

    ASTnode* getArgsMult()
    {
        return ArgsMult;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        string id;
        ASTnode* ArgsMult;
        ASTnode* Code;
};

class ArgsMultASTnode : public ASTnode
{
    public:
    ArgsMultASTnode ()
    {}

    void push_arg(ASTnode* Arg)
    {
        ArgsMult.push_back(Arg);
        return;
    }

    vector<ASTnode*> getArgsMult()
    {
        return ArgsMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> ArgsMult;
};

class ArgASTnode : public ASTnode
{
    public:
      ArgASTnode (ASTnode* Type, ASTnode* Location)
    : Type(Type), Location(Location){}

    ASTnode* getType()
    {
        return Type;
    }

    ASTnode* getLocation()
    {
        return Location;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        ASTnode* Type;
        ASTnode* Location;
};

class CodeASTnode : public ASTnode
{
    public:
      CodeASTnode (ASTnode* StatMult)
    : StatMult(StatMult){}

    ASTnode* getStatMult()
    {
        return StatMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        ASTnode* StatMult;
};


class StatMultASTnode : public ASTnode
{
    public:
    StatMultASTnode ()
    {}

    void push_stat(ASTnode* Stat)
    {
        StatMult.push_back(Stat);
        return;
    }

    vector<ASTnode*> getStatMult()
    {
        return StatMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> StatMult;
};

class VarDeclMultASTnode : public ASTnode
{
    public:
    VarDeclMultASTnode ()
    {}

    void push_vardecl(ASTnode* VarDecl)
    {
        VarDeclMult.push_back(VarDecl);
        return;
    }

    vector<ASTnode*> getVarDeclMult()
    {
        return VarDeclMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> VarDeclMult;
};

class VarDeclASTnode : public ASTnode
{
    public:
      VarDeclASTnode (ASTnode* Type, ASTnode* IdMult)
    : Type(Type), IdMult(IdMult){}

    ASTnode* getType()
    {
        return Type;
    }

    ASTnode* getIdMult()
    {
        return IdMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        ASTnode* Type;
        ASTnode* IdMult;
};

class IdMultASTnode : public ASTnode
{
    public:
    IdMultASTnode ()
    {}

    void push_decl(ASTnode* Id)
    {
        IdMult.push_back(Id);
        return;
    }

    vector<ASTnode*> getIdMult()
    {
        return IdMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> IdMult;
};

class DeclASTnode : public ASTnode
{
    public:
      DeclASTnode (ASTnode* Location)
    : Location(Location){}

      DeclASTnode (ASTnode* Location, ASTnode* AssignOp, ASTnode* Expr)
    : Location(Location), AssignOp(AssignOp), Expr(Expr){}

    ASTnode* getLocation()
    {
        return Location;
    }

    ASTnode* getAssignOp()
    {
        return AssignOp;
    }

    ASTnode* getExpr()
    {
        return Expr;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Location = NULL;
      ASTnode* AssignOp = NULL;
      ASTnode* Expr = NULL;
};



class LocationASTnode : public ASTnode
{
    public:
      LocationASTnode (string type, string id)
    : type(type), id(id){}

      LocationASTnode (string type, string id, ASTnode* Expr1)
    : type(type), id(id), Expr1(Expr1){}

      LocationASTnode (string type, string id, ASTnode* Expr1, ASTnode* Expr2)
    : type(type), id(id), Expr1(Expr1), Expr2(Expr2){}

    string getType()
    {
      return type;
    }

    string getId()
    {
      return id;
    }

    ASTnode* getExpr1()
    {
        return Expr1;
    }

    ASTnode* getExpr2()
    {
        return Expr2;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type = "\0";
      string id = "\0";
      ASTnode* Expr1 = NULL;
      ASTnode* Expr2 = NULL;
};


class MethodCallASTnode : public ASTnode
{
    public:
      MethodCallASTnode (string id, ASTnode* ExprMult)
    : id(id), ExprMult(ExprMult){}

    string getId()
    {
        return id;
    }

    ASTnode* getExprMult()
    {
        return ExprMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        string id;
        ASTnode* ExprMult;
};

class ExprMultASTnode : public ASTnode
{
    public:
    ExprMultASTnode ()
    {}

    void push_expr(ASTnode* Expr)
    {
        ExprMult.push_back(Expr);
        return;
    }

    vector<ASTnode*> getExprMult()
    {
        return ExprMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> ExprMult;
};

class StatASTnode : public ASTnode
{
    public:
      StatASTnode (ASTnode* Expr)
    : Expr(Expr){}

      StatASTnode (string str)
    : str(str){}

      StatASTnode (string str, ASTnode* Expr)
    : str(str), Expr(Expr){}

    string getStr()
    {
        return str;
    }

    ASTnode* getExpr()
    {
        return Expr;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        string str = "\0";
        ASTnode* Expr = NULL;
};


class AssignStatMultASTnode : public ASTnode
{
    public:
    AssignStatMultASTnode ()
    {}

    void push_assignstat(ASTnode* AssignStat)
    {
        AssignStatMult.push_back(AssignStat);
        return;
    }

    vector<ASTnode*> getAssignStatMult()
    {
        return AssignStatMult;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> AssignStatMult;
};

class AssignStatASTnode : public ASTnode
{
    public:
      AssignStatASTnode (ASTnode* Location, ASTnode* AssignOp, ASTnode* Expr)
    : Location(Location), AssignOp(AssignOp), Expr(Expr){}

    ASTnode* getLocation()
    {
        return Location;
    }

    ASTnode* getAssignOp()
    {
        return AssignOp;
    }

    ASTnode* getExpr()
    {
        return Expr;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Location;
      ASTnode* AssignOp;
      ASTnode* Expr;
};

class InputsASTnode : public ASTnode
{
    public:
    InputsASTnode ()
    {}

    void push_input(string Input)
    {
        Inputs.push_back(Input);
        return;
    }

    vector<string> getInputs()
    {
        return Inputs;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<string> Inputs;
};

class OutputsASTnode : public ASTnode
{
    public:
    OutputsASTnode ()
    {}

    void push_output(ASTnode* Output)
    {
        Outputs.push_back(Output);
        return;
    }

    vector<ASTnode*> getOutputs()
    {
        return Outputs;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
        vector<ASTnode*> Outputs;
};


class OutfileASTnode : public ASTnode
{
    public:
      OutfileASTnode (string type, string val)
    : type(type), val(val){}

    string getType()
    {
        return type;
    }

    string getVal()
    {
        return val;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type;
      string val;
};


class LoopASTnode : public ASTnode
{
    public:
      LoopASTnode (string type, ASTnode* Loop)
    : type(type), Loop(Loop){}

    string getType()
    {
        return type;
    }

    ASTnode* getLoop()
    {
        return Loop;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type;
      ASTnode* Loop;
};


class WhileLoopASTnode : public ASTnode
{
    public:
      WhileLoopASTnode (ASTnode* Expr, ASTnode* Code)
    : Expr(Expr), Code(Code){}

    ASTnode* getExpr()
    {
        return Expr;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Expr;
      ASTnode* Code;
};


class ForLoopASTnode : public ASTnode
{
    public:
      ForLoopASTnode (ASTnode* Stat, ASTnode* Expr, ASTnode* AssignStatMult, ASTnode* Code)
    : Stat(Stat), Expr(Expr), AssignStatMult(AssignStatMult), Code(Code){}

    ASTnode* getExpr()
    {
        return Expr;
    }

    ASTnode* getStat()
    {
        return Stat;
    }

    ASTnode* getAssignStatMult()
    {
        return AssignStatMult;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Stat;
      ASTnode* Expr;
      ASTnode* AssignStatMult;
      ASTnode* Code;
};


class IfStatASTnode : public ASTnode
{
    public:
      IfStatASTnode (ASTnode* Expr, ASTnode* Code, ASTnode* ElseifStat, ASTnode* ElseStat)
    : Expr(Expr), Code(Code), ElseifStat(ElseifStat), ElseStat(ElseStat){}

    ASTnode* getExpr()
    {
        return Expr;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    ASTnode* getElseifStat()
    {
        return ElseifStat;
    }

    ASTnode* getElseStat()
    {
        return ElseStat;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Expr;
      ASTnode* Code;
      ASTnode* ElseifStat;
      ASTnode* ElseStat;
};

class ElseifStatASTnode : public ASTnode
{
    public:
      ElseifStatASTnode ()
      {}

    ElseifStatASTnode (ASTnode* Expr, ASTnode* Code)
  : Expr(Expr), Code(Code){}

    ASTnode* getExpr()
    {
        return Expr;
    }

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Expr = NULL;
      ASTnode* Code = NULL;
};

class ElseStatASTnode : public ASTnode
{
    public:
      ElseStatASTnode ()
      {}

    ElseStatASTnode (ASTnode* Code)
  : Code(Code){}

    ASTnode* getCode()
    {
        return Code;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* Code = NULL;
};


class ExprASTnode : public ASTnode
{
    public:
      ExprASTnode (ASTnode* Expr1)
    : Expr1(Expr1){}

      ExprASTnode (string str)
    : str(str){}

      ExprASTnode (string str, ASTnode* Expr1)
    : str(str), Expr1(Expr1){}

    ExprASTnode (ASTnode* Expr1, ASTnode* Op, ASTnode* Expr2)
  : Expr1(Expr1), Op(Op), Expr2(Expr2){}

    ASTnode* getExpr1()
    {
        return Expr1;
    }

    ASTnode* getExpr2()
    {
        return Expr2;
    }

    ASTnode* getOp()
    {
        return Op;
    }

    string getStr()
    {
        return str;
    }


    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string str = "\0";
      ASTnode* Expr1 = NULL;
      ASTnode* Op = NULL;
      ASTnode* Expr2 = NULL;
};


class TernaryASTnode : public ASTnode
{
    public:
      TernaryASTnode (ASTnode* expr1, ASTnode* expr2, ASTnode* expr3)
    : expr1(expr1), expr2(expr2), expr3(expr3){}

    ASTnode* getExpr1()
    {
        return expr1;
    }

    ASTnode* getExpr2()
    {
        return expr2;
    }

    ASTnode* getExpr3()
    {
        return expr3;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      ASTnode* expr1;
      ASTnode* expr2;
      ASTnode* expr3;
};

class OpASTnode : public ASTnode
{
    public:
      OpASTnode (ASTnode* ArithOp)
      : ArithOp(ArithOp){}

      OpASTnode (string op)
    : op(op){}

    ASTnode* getArithOp()
    {
        return ArithOp;
    }

    string getOp()
    {
        return op;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string op = "\0";
      ASTnode* ArithOp = NULL;
};

class ArithOpASTnode : public ASTnode
{
    public:
      ArithOpASTnode (string op)
    : op(op){}

    string getOp()
    {
        return op;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string op;
};

class LiteralASTnode : public ASTnode
{
    public:
      LiteralASTnode (string type, string str_val)
    : type(type), str_val(str_val){}

    LiteralASTnode (string type, int int_val)
  : type(type), int_val(int_val){}

    string getType()
    {
        return type;
    }

    string getStrVal()
    {
        return str_val;
    }

    int getIntVal()
    {
        return int_val;
    }

    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type;
      string str_val = "\0";
      int int_val = 0;
};

class TypeASTnode : public ASTnode
{
    public:
      TypeASTnode (string type)
    : type(type){}

    string getType()
    {
        return type;
    }
    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type;
};

class AssignOpASTnode : public ASTnode
{
    public:
      AssignOpASTnode (string type)
    : type(type){}

    string getType()
    {
        return type;
    }
    virtual void accept(ASTvisitor& v)
    {
        v.visit(*this);
    }

    private:
      string type;
};


class ASTContext
{
  public:
    ASTnode* pRoot;
    ~ASTContext()
    {
	    clearAST();
    }
    // free all saved expression trees
    void clearAST()
    {
        delete pRoot;
    }
};

#endif /* End of AST_H */
