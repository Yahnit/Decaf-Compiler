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
N
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cin
<Inputs>
N
</Inputs>
</Statement>
<Statement>
<Variable Declaration>
<Data Type>
bool
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
result
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Method Call>
<Method Name>
checkPrime
</Method Name>
<Expressions>
<Expression>
<Location>
N
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
<If Statement>
<Expression>
<Expression>
<Location>
res
</Location>
</Expression>
<Operator>
==
</Operator>
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
</Expression>
<Code>
<Statements>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
string
</Type>
<Name>
"Yes, the number is prime"
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
<ElseIf Statement>
</ElseIf Statement>
<Else Statement>
<Code>
<Statements>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
string
</Type>
<Name>
"Oops!, the number is not prime"
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
0
</Val>
</Literal>
</Expression>
</Statement>
</Statements>
</Code>
</Start>
input: 