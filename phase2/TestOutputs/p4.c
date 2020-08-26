input: Postfix Form: 
<Start>
<Libraries>
<Library>
<Library Name>
stdio.h
</Library Name>
</Library>
<Library>
<Library Name>
iostream
</Library Name>
</Library>
</Libraries>
<Global Declarations>
<Variable Declarations>
</Variable Declarations>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
MAX
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
100000000
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
checkPrime
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
n
</Location>
</Argument>
</Arguments>
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
<Location>
n
</Location>
</Expression>
</Expression>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
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
2
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
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
</Assignment Statements>
<Code>
<Statements>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
n
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
%
</Arithmetic Operator>
</Operator>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
==
</Operator>
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
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
return
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
</Statement>
</Statements>
</Code>
<ElseIf Statement>
</ElseIf Statement>
<Else Statement>
</Else Statement>
</If Statement>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
<Statement>
return
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
ans
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
forloop
</Type>
<For Loop>
<Expression>
<Expression>
<Location>
z
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
MAX
</Location>
</Expression>
</Expression>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
z
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
<Assignment Statements>
<Assignment Statement>
<Location>
z
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
x
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
z
</Location>
</Expression>
</Expression>
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
0
</Val>
</Literal>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
x
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
y
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
z
</Location>
</Expression>
</Expression>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
y
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
<Assignment Statements>
<Assignment Statement>
<Location>
y
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
<Code>
<Statements>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
*
</Arithmetic Operator>
</Operator>
<Expression>
<Expression>
<Location>
x
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
<Expression>
<Expression>
<Location>
y
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
*
</Arithmetic Operator>
</Operator>
<Expression>
<Expression>
<Location>
y
</Location>
</Expression>
<Operator>
==
</Operator>
<Expression>
<Expression>
<Location>
z
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
*
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
z
</Location>
</Expression>
</Expression>
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
ans
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
</Statements>
</Code>
<ElseIf Statement>
</ElseIf Statement>
<Else Statement>
</Else Statement>
</If Statement>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
id
</Type>
<Name>
ans
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