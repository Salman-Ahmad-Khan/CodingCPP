#include <iostream>
using namespace std;

int main()
{
/*
Misc Operators :


sizeof() Returns the size of variable
 If a is integer then sizeof(a) will return 4

Condition? X:Y
Conditional operator. If condition is true, 
then returns value of X or else value of Y
c=a>b?a:b;

Cast 
Casting operators convert one data type to 
another.
int(4.350) would return 4.

Comma (,) 
Comma operator causes a sequence of 
operations to be performed. The value of 
the entire comma expression is the value of 
the last expression of the comma-separated 
list

*/

int x = 2;
(x && 1) ? printf("true") : printf("false");

    
    return 0;
}