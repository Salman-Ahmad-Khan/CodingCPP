#include <iostream>
using namespace std;
// Operators in C++:
// Operators are nothing but symbols that tell the compiler to perform some 
// specific operations.
int main()
{
/*
Arithmetic Operators: 
Arithmetic operators perform some arithmetic operation on one or two 
operands. Operators that operate on one operand are called unary 
arithmetic operators and operators that operate on two operands are 
called binary arithmetic operators.
+,-,*,/,% are binary operators.

++, -- are unary operators.


Suppose : A=5 and B=10

+ Adds two operands A+B = 15
- Subtracts right operand from left operand B-A = 5
* Multiplies two operands A*B = 50
/ Divides left operand by right operand B/A = 2
% Finds the remainder after integer division B%A = 0
++ Incrementer A++ = 6
-- Decrementer A-- = 4


Pre-incrementer : It increments the value of the operand instantly.
Post-incrementer : It stores the current value of the operand temporarily 
and only after that statement is completed, the value of the operand is 
incremented.
 Pre-decrementer : It decrements the value of the operand instantly.
Post-decrementer : It stores the current value of the operand temporarily 
and only after that statement is completed, the value of the operand is 
decremented.


*/

int a=10,b,c;
b = a++;
c = ++a;
cout<<a<<" "<<b<<" "<<c<<endl;


    
    return 0;
}