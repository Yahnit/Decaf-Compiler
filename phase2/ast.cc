// $Id$

#include <iostream>
#include <fstream>
#include "driver.h"
#include "ast.h"
#include "PostFixVisitor.h"


int main()
{
    ASTContext ast;
    decaf::Driver driver(ast);
    PostFixVisitor pfv;

    string line;
    while( cout << "input: " &&
	   getline(cin, line) &&
	   !line.empty())
    {
        bool result = driver.parse_string(line, "input");

	    if (result)
    	{
            if (ast.pRoot != NULL ) {
                StartASTnode *start_astnode;

                cout << "Postfix Form: " << endl;

                start_astnode = dynamic_cast<StartASTnode *>(ast.pRoot);

                if (start_astnode != NULL)
                {
                    pfv.visit(*start_astnode);
                }
            }
            ast.clearAST();
	    }
	}
}
