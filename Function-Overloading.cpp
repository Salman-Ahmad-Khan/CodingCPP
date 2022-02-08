#include <iostream>
using namespace std;

int area(int, int); // function prototype
float area(int);    // function prototype

int main()
{
    /*
    POLYMORPHISM:

    The word polymorphism means having many forms. Typically, polymorphism
    occurs when there is a hierarchy of classes and they are related by inheritance.

    C++ polymorphism means that a call to a member function will cause a different
    function to be executed depending on the type of object that invokes the
    function.

    Function Overloading:
C++ allows you to specify more than one definition for a function name
 in the same scope, which is called function
overloading.
An overloaded declaration is a declaration that is declared with the same name
as a previously declared declaration in the same scope, except that both
declarations have different arguments and obviously different definition
(implementation).

When you call an overloaded function or operator, the compiler determines the
most appropriate definition to use, by comparing the argument types you have
used to call the function or operator with the parameter types specified in the
definitions. The process of selecting the most appropriate overloaded function  is called overload resolution.


    In simple words,
    when one function name is overloded with different jobs,it is called Function Overloading.
    or
    Too many functions with same name to perform different tasks,Function Overloading.

    NOTE:
    You can have multiple definitions for the same function name in the same scope.
The definition of the function must differ from each other by the types and/or
the number of arguments in the argument list. You cannot overload function
declarations that differ only by return type.

    function name should be same and number of arguments should be different for overloading
     */

    /*
    How Function Overloading is Resolved?

1. EXACT MATCH
First, C++ tries to find an exact match. This is the case where the actual argument exactly matches the parameter type of one of the overloaded functions.

2.PROMOTION
 If no exact match is found, C++ tries to find a match through promotion

- Char, unsigned char, and short is promoted to an int.

- Float is promoted to double

3.
TYPE CONVERSION
 If no promotion is found, C++ tries to find a match through standard conversion
*/

    cout << "Input the radius of circle ";
    int r;
    cin >> r;
    float ac = area(r);
    cout << "area of circle is " << ac << endl;

    cout << "Input the length and width of rectangle ";
    int l, w;
    cin >> l >> w;
    int ar = area(l, w);
    cout << "area of rectangle is " << ar << endl;

    return 0;
}

float area(int r)
{
    return (3.14 * r);
}

int area(int l, int w)
{
    return (l * w);
}