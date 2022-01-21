#include <iostream>
using namespace std;

/*
Variables:
A variable is a container (storage area) used to hold data.
Each variable should be given a unique name (identifier).
int a=2;
Here a is the variable name that holds the integer value 2.
The value of a can be changed, hence the name variable.
There are certain rules for naming a variable in C++
1. Can only have alphabets, numbers and underscore.
2. Cannot begin with a number.

3. Cannot be a keyword defined in C++ language (like int is a keyword)
*/

/*
Data Types :
Data types are declarations for variables. This determines the type and size of
data associated with variables which is essential to know since different data
types occupy different size of memory.


*/
int main()
{
    // Print the size of different data types:

    cout << "The Size of 'int data type' is => " << sizeof(int) << endl;
    cout << "The Size of 'float data type' is => " << sizeof(float) << endl;
    cout << "The Size of 'double data type' is => " << sizeof(double) << endl;
    cout << "The Size of 'char data type' is => " << sizeof(char) << endl;
    cout << "The Size of 'wchar_t data type' is => " << sizeof(wchar_t) << endl;
    cout << "The Size of 'bool data type' is => " << sizeof(bool) << endl;
    cout << "The Size of 'void data type' is => " << sizeof(void) << endl;

    /*
    C++ Type Modifiers :
Type modifiers are used to modify the fundamental data types.
*/
    cout << "The Size of 'signed int data type' is => " << sizeof(signed int) << endl;
    cout << "The Size of 'unsigned int data type' is => " << sizeof(unsigned int) << endl;
    cout << "The Size of 'short data type' is => " << sizeof(short) << endl;
    cout << "The Size of 'long data type' is => " << sizeof(long) << endl;
    cout << "The Size of 'long long int data type' is => " << sizeof(long long int) << endl;
    cout << "The size of 'unsigned long long data' is => " << sizeof(unsigned long long) << endl;
    cout << "The Size of 'long double' is => " << sizeof(long double) << endl;
    cout << "The Size of 'signed char' is => " << sizeof(signed char) << endl;
    cout << "The Size of 'unsigned char' is => " << sizeof(unsigned char) << endl;

    /*
    Derived Data Types:
These are the data types that are derived from fundamental (or built-in) data
types. For example, arrays, pointers, function, reference.

User-Defined Data Types:
These are the data types that are defined by user itself.
For example, class, structure, union, enumeration, etc.
    */

    return 0;
}