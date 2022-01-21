#include <iostream>
using namespace std;

int main()
{
    /*
    Input and Output in C++ :

    The header file iostream must be included to make use of the input/output
    (cin/cout) operators.

    Standard Output (cout) :
    By default, the standard output of a program points at the screen. So with the
    cout operator and the “insertion” operator (<<) you can print a message onto
    the screen.*/

    cout << "Hello World!" << endl;
    // To print the content of a variable the double quotes are not used.

    char Yes = 'y';
    cout << Yes << endl;

    // The << operator can be used multiple times in a single statement. Take a look
    // at an example.
    cout << "Hello, "
         << "this is a test "
         << "string." << endl;

    // It is possible to combine variables and text:
    char No = 'n';
    cout << "Print the character " << No << endl;

    /*
    The cout operator does not put a line break at the end of the output. So if
   you want to print two sentences you will have to use the new-line character
   ( \n ).
   */
    cout << "This is one sentence.\n";
    cout << "This is another.\n";

    /*
    It is possible to use the "endl" manipulator instead of the new-line character:
    */
    cout << "This is one sentence." << endl;
    cout << "This is another." << endl;

    /*
    Standard input (cin) :
    In most cases the standard input device is the keyboard. With the cin and >>
    operators it is possible to read input from the keyboard.
    Take a look at an example:
    */

    cout << "Input any character: ";
    char ch;
    cin >> ch;
    cout << "You entered " << ch << endl;

    /*
    The cin operator will always return the variable type that you use with cin. So
    if you request an integer you will get an integer and so on. This can cause an
    error when the user of the program does not return the type that you are
    expecting. (Example: you ask for an integer and you get a string of characters.)

    */

    // The cin operator is also chainable. For example:
    cout << "Input any two numbers: ";
    float a, b;
    cin >> a >> b; /* In this case the user must give two input values, that are separated by any
valid blank separator (tab, space or new-line).
    */

    cout << "You entered " << a << " and " << b << endl;

    return 0;
}