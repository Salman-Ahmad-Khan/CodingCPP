#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Global variable declaration:
int g;

// Global variable declaration:
int gv = 23;

// Global variable declaration:
int p;


int main()

{
    /*
    A scope is a region of the program and broadly speaking there are three places, 
where variables can be declared:
1. Inside a function or a block which is called local variables,
2. In the definition of function parameters which is called formal parameters.
3. Outside of all functions which is called global variables.
We will learn what a function is, and it's parameter in subsequent chapters. Here 
let us explain what local and global variables are.

Local Variables:
Variables that are declared inside a function or block are local variables. They 
can be used only by statements that are inside that function or block of code. 
Local variables are not known to functions outside their own. Following is the 
example using local variables:
*/
  // Local variable declaration:
 int a, b;
 int c;
// actual initialization
 a = 10;
 b = 20;
 c = a + b;
 cout << c<<endl;


 /*
 Global Variables:
Global variables are defined outside of all the functions, usually on top of the 
program. The global variables will hold their value throughout the life-time of 
your program.
A global variable can be accessed by any function. That is, a global variable is 
available for use throughout your entire program after its declaration. Following 
is the example using global and local variables:
*/

// Local variable declaration:
 int d, e;
 // actual initialization
 d = 220;
 e = 30;
 g = d + e;
 cout << g<<endl;



 /*
 A program can have same name for local and global variables but value of local 
variable inside a function will take preference.
*/
 // Local variable declaration:
 int gv = 55;
cout<<gv<<endl;


/*
Initializing Local and Global Variables:
When a local variable is defined, it is not initialized by the system, you must 
initialize it yourself. Global variables are initialized automatically by the system 
when you define them as follows:

Data_Type               Initializer

int                        0
char                     '\0'
float                      0
double                     0
pointer                   NULL

It is a good programming practice to initialize variables properly, otherwise 
sometimes program would produce unexpected result.
*/
 // Local variable declaration:
double k;
cout<<"k="<<k<<endl;


cout<<"p="<<p<<endl;





    return 0;
}
