bison -d parser.y;
flex scanner.l;
g++ parser.tab.c lex.yy.c -ll -o out
./out < test_input.c
