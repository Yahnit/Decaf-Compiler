// $Id$

#include <iostream>
#include <fstream>
#include "driver.h"
#include "ast.h"
#include "Interpretor.h"


int main()
{
    ASTContext ast;
    decaf::Driver driver(ast);
    Interpretor pfv;

    string line;
    while( cout << "\n" &&
	   getline(cin, line) &&
	   !line.empty())
    {
        bool result = driver.parse_string(line, "input");

	    if (result)
    	{
            if (ast.pRoot != NULL ) {
                StartASTnode *start_astnode;

                cout << "Interpretor: " << endl;

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
