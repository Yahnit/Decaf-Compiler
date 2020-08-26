input: Postfix Form: 
<Start>
<Libraries>
<Library>
<Library Name>
iostream
</Library Name>
</Library>
<Library>
<Library Name>
stdio.h
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
b
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
10000000
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Global Declarations>
<Method Declarations>
<Method Declaration>
<Method Name>
merging
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
a
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1000000
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
low
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
mid
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
high
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
l1
</Location>
</Declaration>
<Declaration>
<Location>
l2
</Location>
</Declaration>
<Declaration>
<Location>
i
</Location>
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
l1
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Expression>
<Location>
mid
</Location>
</Expression>
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
l2
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
high
</Location>
</Expression>
</Expression>
</Expression>
</Expression>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
l1
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
low
</Location>
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
l2
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
mid
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
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
</Expression>
</Assignment Statement>
<Assignment Statement>
<Location>
i
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
low
</Location>
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
</Assignment Statements>
<Code>
<Statements>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
a
<Expression>
<Location>
l1
</Location>
</Expression>
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
a
<Expression>
<Location>
l2
</Location>
</Expression>
</Location>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
a
<Expression>
<Location>
l1
</Location>
</Expression>
</Location>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
l1
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
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
a
<Expression>
<Location>
l2
</Location>
</Expression>
</Location>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
l2
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
</Else Statement>
</If Statement>
</Statement>
</Statements>
</Code>
</For Loop>
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
<Location>
l1
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
mid
</Location>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
a
<Expression>
<Location>
l1
</Location>
</Expression>
</Location>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
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
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
l1
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
<Location>
l2
</Location>
</Expression>
<Operator>
<=
</Operator>
<Expression>
<Location>
high
</Location>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
b
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
a
<Expression>
<Location>
l2
</Location>
</Expression>
</Location>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
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
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
l2
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
</While Loop>
</Loop>
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
high
</Location>
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
<Location>
low
</Location>
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
</Assignment Statements>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
b
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
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
</Method Declaration>
<Method Declaration>
<Method Name>
sort
</Method Name>
<Arguments>
<Argument>
<Data Type>
int
</Data Type>
<Location>
a
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1000000
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
low
</Location>
</Argument>
<Argument>
<Data Type>
int
</Data Type>
<Location>
high
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
mid
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<If Statement>
<Expression>
<Expression>
<Location>
low
</Location>
</Expression>
<Operator>
<
</Operator>
<Expression>
<Location>
high
</Location>
</Expression>
</Expression>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
mid
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Expression>
<Location>
low
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
high
</Location>
</Expression>
</Expression>
<Operator>
<Arithmetic Operator>
/
</Arithmetic Operator>
</Operator>
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
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
<Method Call>
<Method Name>
sort
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
low
</Location>
</Expression>
<Expression>
<Location>
mid
</Location>
</Expression>
</Expressions>
</Method Call>
</Statement>
<Statement>
<Method Call>
<Method Name>
sort
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Expression>
<Location>
mid
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
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
</Expression>
<Expression>
<Location>
high
</Location>
</Expression>
</Expressions>
</Method Call>
</Statement>
<Statement>
<Method Call>
<Method Name>
merging
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
low
</Location>
</Expression>
<Expression>
<Location>
mid
</Location>
</Expression>
<Expression>
<Location>
high
</Location>
</Expression>
</Expressions>
</Method Call>
</Statement>
</Statements>
</Code>
<ElseIf Statement>
</ElseIf Statement>
<Else Statement>
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
n
</Location>
</Declaration>
<Declaration>
<Location>
temp
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
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
1000000
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cin
<Inputs>
n
</Inputs>
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
cin
<Inputs>
temp
</Inputs>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
a
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
temp
</Location>
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
<Variable Declaration>
<Data Type>
int
</Data Type>
<Multiple Ids>
<Declaration>
<Location>
low
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
<Declaration>
<Location>
high
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
n
</Location>
</Expression>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
<Method Call>
<Method Name>
sort
</Method Name>
<Expressions>
<Expression>
<Location>
a
</Location>
</Expression>
<Expression>
<Location>
low
</Location>
</Expression>
<Expression>
<Location>
high
</Location>
</Expression>
</Expressions>
</Method Call>
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
temp
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
a
<Expression>
<Location>
i
</Location>
</Expression>
</Location>
</Expression>
</Assignment Statement>
</Assignment Statements>
</Statement>
<Statement>
cout
<Outputs>
<Outfile>
<Type>
id
</Type>
<Name>
temp
</Name>
</Outfile>
<Outfile>
<Type>
string
</Type>
<Name>
" "
</Name>
</Outfile>
</Outputs>
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