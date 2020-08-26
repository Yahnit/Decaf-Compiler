input: input: input: Postfix Form:
<Start>
<Libraries>
<Library>
<Library Name>
iostream
</Library Name>
</Library>
<Library>
<Library Name>
math.h
</Library Name>
</Library>
</Libraries>
<Global Declarations>
<Variable Declarations>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
var2
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Variable Declarations>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var3
</Location>
</Declaration>
<Declaration>
<Location>
var4
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Global Declarations>
<Method Declarations>
<Method Declaration>
<Method Name>
func1
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
a
</Location>
</Argument>
<Argument>
<Data Type>
bool
</Data Type>
<Location>
b
</Location>
</Argument>
<Argument>
<Data Type>
char
</Data Type>
<Location>
c
</Location>
</Argument>
<Argument>
<Data Type>
uint
</Data Type>
<Location>
d
</Location>
</Argument>
</Arguments>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var5
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
<Declaration>
<Location>
var6
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
int
</Type>
<Val>
-2
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var7
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
bool
</Type>
<Val>
false
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
var8
</Location>
</Declaration>
<Declaration>
<Location>
var9
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
id
</Type>
<Name>
a
</Name>
</Outfile>
<Outfile>
<Type>
id
</Type>
<Name>
b
</Name>
</Outfile>
<Outfile>
<Type>
string
</Type>
<Name>
"fdsfds"
</Name>
</Outfile>
<Outfile>
<Type>
id
</Type>
<Name>
a
</Name>
</Outfile>
<Outfile>
<Type>
newline
</Type>
<Name>
endl
</Name>
</Outfile>
</Outputs>
</Statement>
<Statement>
cin
<Inputs>
a
b
c
</Inputs>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var2
</Location>
<Assignment Operator
-=
</Assignment Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Operator>
||
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
var5
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
!
<Expression>
<Location>
var2
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
-
<Expression>
<Location>
var2
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
arr
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
23
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
32
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
char
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
s
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
str
</Type>
<Val>
"dsfdsfs"
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Method Declaration>
<Method Declaration>
<Method Name>
func2
</Method Name>
<Arguments>
<Argument>
<Data Type>
char
</Data Type>
<Location>
c1
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
d1
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Argument>
</Arguments>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
x
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
arr
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
10
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
y
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Ternary Expr>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Ternary Expr>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
b
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
b1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
bool
</Type>
<Val>
true
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
b2
</Location>
</Declaration>
<Declaration>
<Location>
b3
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
10
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
</Statements>
</Code>
<ElseIf Statement>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
int
</Type>
<Val>
-10
</Val>
</Literal>
</Expression>
</Expression>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
break
</Statement>
</Statements>
</Code>
<ElseIf Statement>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
continue
</Statement>
</Statements>
</Code>
</ElseIf Statement>
<Else Statement>
</Else Statement>
</If Statement>
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
</Statements>
</Code>
</ElseIf Statement>
<Else Statement>
<Code>
<Statements>
<Statement>
<Loop>
<Type>
forloop
</Type>
<For Loop>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
24
</Val>
</Literal>
</Expression>
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
34
</Val>
</Literal>
</Expression>
</Expression>
</Expression>
</Expression>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
i
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
j
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
i
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
j
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
<Code>
<Statements>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
c
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
break
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Operator>
!=
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
break
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
</Statements>
</Code>
</Else Statement>
</If Statement>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Method Declaration>
</Method Declarations>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a1
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func1
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
a3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Start>
input: input: Postfix Form:
<Start>
<Libraries>
<Library>
<Library Name>
iostream
</Library Name>
</Library>
<Library>
<Library Name>
math.h
</Library Name>
</Library>
</Libraries>
<Global Declarations>
<Variable Declarations>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
var2
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var3
</Location>
</Declaration>
<Declaration>
<Location>
var4
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
<Variable Declaration>
<Data Type>
char
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
cjs
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
char
</Type>
<Val>
'a'
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Variable Declarations>
<Variable Declaration>
<Data Type>
char
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
str
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
str
</Type>
<Val>
"Thisisastring"
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Global Declarations>
<Method Declarations>
<Method Declaration>
<Method Name>
func1
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
a
</Location>
</Argument>
<Argument>
<Data Type>
bool
</Data Type>
<Location>
b
</Location>
</Argument>
<Argument>
<Data Type>
char
</Data Type>
<Location>
c
</Location>
</Argument>
<Argument>
<Data Type>
uint
</Data Type>
<Location>
d
</Location>
</Argument>
</Arguments>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var5
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
<Declaration>
<Location>
var6
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
int
</Type>
<Val>
-2
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
var7
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
bool
</Type>
<Val>
false
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
var8
</Location>
</Declaration>
<Declaration>
<Location>
var9
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
id
</Type>
<Name>
a
</Name>
</Outfile>
<Outfile>
<Type>
id
</Type>
<Name>
b
</Name>
</Outfile>
<Outfile>
<Type>
string
</Type>
<Name>
"fdsfds"
</Name>
</Outfile>
<Outfile>
<Type>
id
</Type>
<Name>
a
</Name>
</Outfile>
<Outfile>
<Type>
newline
</Type>
<Name>
endl
</Name>
</Outfile>
</Outputs>
</Statement>
<Statement>
cin
<Inputs>
a
b
c
</Inputs>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var2
</Location>
<Assignment Operator
-=
</Assignment Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Operator>
||
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
var5
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
!
<Expression>
<Location>
var2
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
var3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
-
<Expression>
<Location>
var2
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
arr
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
23
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
32
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
char
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
s
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
str
</Type>
<Val>
"dsfdsfs"
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Method Declaration>
<Method Declaration>
<Method Name>
func2
</Method Name>
<Arguments>
<Argument>
<Data Type>
char
</Data Type>
<Location>
c1
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
d1
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Location>
</Argument>
</Arguments>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
x
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
arr
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
10
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
y
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Ternary Expr>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Ternary Expr>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
b
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
b1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
bool
</Type>
<Val>
true
</Val>
</Literal>
</Expression>
</Declaration>
<Declaration>
<Location>
b2
</Location>
</Declaration>
<Declaration>
<Location>
b3
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
10
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
</Statements>
</Code>
<ElseIf Statement>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
4
</Val>
</Literal>
</Expression>
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
int
</Type>
<Val>
-10
</Val>
</Literal>
</Expression>
</Expression>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
break
</Statement>
</Statements>
</Code>
<ElseIf Statement>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
continue
</Statement>
</Statements>
</Code>
</ElseIf Statement>
<Else Statement>
</Else Statement>
</If Statement>
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
</Statements>
</Code>
</ElseIf Statement>
<Else Statement>
<Code>
<Statements>
<Statement>
<Loop>
<Type>
forloop
</Type>
<For Loop>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
24
</Val>
</Literal>
</Expression>
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
34
</Val>
</Literal>
</Expression>
</Expression>
</Expression>
</Expression>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
i
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
j
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
i
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1
</Val>
</Literal>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
j
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
<Code>
<Statements>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
5
</Val>
</Literal>
</Expression>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
a
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
c
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
break
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
<Statement>
<Loop>
<Type>
whileloop
</Type>
<While Loop>
<Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
<Operator>
!=
</Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
break
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
</Statements>
</Code>
</Else Statement>
</If Statement>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
2
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Method Declaration>
</Method Declarations>
<Code>
<Statements>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
a1
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
func1
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
b
</Location>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
a3
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
3
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
return
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
0
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Start>
input:
