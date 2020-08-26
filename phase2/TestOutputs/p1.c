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
</Global Declarations>
<Method Declarations>
<Method Declaration>
<Method Name>
function
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
i
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
k
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
1
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
j
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Location>
k
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
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Assignment Statements>
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
1
</Val>
</Literal>
</Expression>
</Assignment Statement>
</Assignment Statements>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
ans
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
ans
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
*
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
i
</Location>
</Expression>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
</Statements>
</Code>
</For Loop>
</Loop>
</Statement>
<Statement>
return
<Expression>
<Location>
ans
</Location>
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
N
</Location>
</Declaration>
<Declaration>
<Location>
k
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cin
<Inputs>
N
k
</Inputs>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
res
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
i
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
N
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
1
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
<Assignment Statements>
<Assignment Statement>
<Location>
res
</Location>
<Assignment Operator
+=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
function
</Method Name>
<Expressions>
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
k
</Location>
</Expression>
</Expressions>
</Method Call>
</Expression>
</Assignment Statement>
</Assignment Statements>
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
res
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
</Statements>
</Code>
</Start>
