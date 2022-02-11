#include <iostream>
using namespace std;

int main()
{
    /*
    PREPROCESSOR:
    The preprocessors are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts.

    All preprocessor directives begin with #, and only white-space characters may
    appear before a preprocessor directive on a line. Preprocessor directives are not C++ statements, so they do not end in a semicolon (;).

    You already have seen a #include directive in all the examples. This macro is
    used to include a header file into the source file.
    There are number of preprocessor directives supported by C++ like #include,
    #define, #if, #else, #line, etc. Let us see important directives:

    The #define Preprocessor
    The #define preprocessor directive creates symbolic constants. The symbolic
    constant is called a macro and the general form of the directive is:
    #define macro-name replacement-text

    When this line appears in a file, all subsequent occurrences of macro in that file
    will be replaced by replacement-text before the program is compiled.
     */

#define pi 3.14
#define sal "Salman Ahmad Khan"
    cout << "value of pi=" << pi << endl;
    cout << "my name is " << sal << endl;

    /*
    Now, let us do the preprocessing of this code to see the result, assuming we have
    the source code file. So let us compile it with -E option and redirect the result to test.p.

    command:
    gcc -E sourese_file_name.cpp > preprocessor_file_name.p
    e.g.
    gcc/g++ -E Preprocessors.cpp > Preprocessors.p


    Now, if you check Preprocessors.p  ,it will have lots of information and at the
    bottom, you will find the value replaced as follows:
    int main ()
    {
     cout << "Value of pi :" << 3.14 << endl;
     return 0;
    }
    */

    /*
    Function-Like Macros:
 You can use #define to define a macro which will take argument as follows:
 */
#define min(a, b) (a < b ? a : b)

    // cout << "Input two numbers ";
    // int i, j;
    // cin >> i >> j;
    // cout << "minimum is " << min(i, j) << endl;

    /*
    C++ provides a number of predefined macros mentioned below:

    __LINE__ : This contains the current line number of the program
    when it is being compiled.

    __FILE__ : This contains the current file name of the program
    when it is being compiled.

    __DATE__ : This contains a string of the form month/day/year that
    is the date of the translation of the source file into
    object code.

    __TIME__ : This contains a string of the form hour:minute:second
    that is the time at which the program was compiled.
    */
    cout << "current line number of the program when compiled : " << __LINE__ << endl;
    cout << "The name of this file is : " << __FILE__ << endl;
    cout << "Date when this file was compiled: " << __DATE__ << endl;
    cout << "Time when this file was compiled: " << __TIME__ << endl;


    /*
    Conditional Compilation:
    There are several directives, which can be used to compile selective portions of 
your program's source code. This process is called conditional compilation.

The conditional preprocessor construct is much like the ‘if’ selection structure. 
Consider the following preprocessor code:
#ifndef NULL
 #define NULL 0
#endif

You can compile a program for debugging purpose. You can also turn on or off 
the debugging using a single macro as follows:
#ifdef DEBUG
 cerr <<"Variable x = " << x << endl;
#endif

This causes the cerr statement to be compiled in the program if the symbolic 
constant DEBUG has been defined before directive #ifdef DEBUG. You can use 
#if 0 statement to comment out a portion of the program as follows:
#if 0
 code prevented from compiling
#endif
*/
#define DEBUG
#ifdef DEBUG
cerr<<"Trace: Inside main function" << endl;
#endif

#if 0
 /* This is commented part */
 code prevented from compiling
 cout <<"Salman" << endl;
#endif

#if 0
cout<<"This line will not be compiled"<<endl;
#endif


/*
The # and # # Operators:
The # and ## preprocessor operators are available in C++ and ANSI/ISO C. The 
# operator causes a replacement-text token to be converted to a string 
surrounded by quotes.
Consider the following macro definition:
*/

#define mkstr(var) #var
cout<<"my name is "<<mkstr(Salman Ahmad)<<endl;
/*
If we compile and run above code, this would produce the following result:
Salman Ahmad
Let us see how it worked. It is simple to understand that the C++ preprocessor 
turns the line:
 cout<<"my name is "<<mkstr(Salman Ahmad)<<endl;
Above line will be turned into the following line:
 cout << " my name is Salman Ahmad" << endl;
 */


/*
The ## operator is used to concatenate two tokens. Here is an example:
#define CONCAT( x, y ) x ## y

When CONCAT appears in the program, its arguments are concatenated and 
used to replace the macro. For example, CONCAT(HELLO, C++) is replaced by 
"HELLO C++" in the program as follows.
*/
#define combine(m,n) m ## n
int xy=103201;
cout<<combine(x,y)<<endl;

/*
Let us see how it worked. It is simple to understand that the C++ preprocessor 
transforms:
 cout << combine(x, y);
Above line will be transformed into the following line:
 cout << xy;
 */
    return 0;
}