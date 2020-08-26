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
m
</Location>
</Declaration>
<Declaration>
<Location>
x
</Location>
</Declaration>
</Multiple Ids>
</Variable Declaration>
</Statement>
<Statement>
cin
<Inputs>
n
m
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
A
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
<Declaration>
<Location>
B
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
</Location>
</Declaration>
<Declaration>
<Location>
C
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
<Expression>
<Literal>
<Type>
uint
</Type>
<Val>
100
</Val>
</Literal>
</Expression>
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
m
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
cin
<Inputs>
x
</Inputs>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
A
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
j
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
x
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
</Statements>
</Code>
</For Loop>
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
m
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
cin
<Inputs>
x
</Inputs>
</Statement>
<Statement>
<Assignment Statements>
<Assignment Statement>
<Location>
B
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
j
</Location>
</Expression>
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Location>
x
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
temp
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
m
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
temp
</Location>
<Assignment Operator
=
</Assignment Operator>
<Expression>
<Expression>
<Location>
A
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
j
</Location>
</Expression>
</Location>
</Expression>
<Operator>
<Arithmetic Operator>
+
</Arithmetic Operator>
</Operator>
<Expression>
<Location>
B
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
j
</Location>
</Expression>
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
C
<Expression>
<Location>
i
</Location>
</Expression>
<Expression>
<Location>
j
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
cout
<Outputs>
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