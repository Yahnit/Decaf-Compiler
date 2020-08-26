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
</Global Declarations>
<Method Declarations>
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
arr
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
n
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
i
</Location>
</Declaration>
<Declaration>
<Location>
key
</Location>
</Declaration>
<Declaration>
<Location>
j
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
1
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
</Assignment Statements>
<Code>
<Statements>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
key
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
arr
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
<Assignment Statements>
<Assignment Statement>
<Location>
j
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
i
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
-
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
</Assignment Statements>
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
j
</Location>
</Expression>
<Operator>
>=
</Operator>
<Expression>
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
<Operator>
&&
</Operator>
<Expression>
<Expression>
<Location>
arr
<Expression>
<Location>
j
</Location>
</Expression>
</Location>
</Expression>
<Operator>
>
</Operator>
<Expression>
<Location>
key
</Location>
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
arr
<Expression>
<Expression>
<Location>
j
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
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
arr
<Expression>
<Location>
j
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
j
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
j
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
-
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
</Assignment Statements>
</Statement>
</Statements>
</Code>
</While Loop>
</Loop>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
arr
<Expression>
<Expression>
<Location>
j
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
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
key
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
n
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