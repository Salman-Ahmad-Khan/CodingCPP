#include <iostream>

// #define in C is a directive which is used to #define alias.
// After this line Sal is replaced by
// "Salman"
#define Sal "Salman"

using namespace std;

int main()
{

    /*
    The typedef Keyword:
    There is an easier way to define structs or you could "alias" types you create.
    For example:
    */

    typedef struct
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } Books;

    /*
    Now, you can use Books directly to define variables of Books type without using struct keyword. Following is the example:
*/
    Books Book1, Book2;

    // You can use typedef keyword for non-structs as well as follows:
    typedef long int *pint32;
    pint32 x, y, z;
    // x, y and z are all pointers to long ints.

    // C program to demonstrate typedef

    // After this line BYTE can be used
    // in place of unsigned char
    typedef unsigned char BYTE;

    BYTE b1, b2;
    b1 = 'c';
    cout << b1 << endl;

    cout << Sal << endl;

    /*
    typedef Declarations:
You can create a new name for an existing type using typedef. Following is the
simple syntax to define a new type using typedef:
typedef existing_type newname;
*/

// For example, the following tells the compiler that feet is another name for int:
typedef int feet;

// Now, the following declaration is perfectly legal and creates an integer variable  called distance:
feet distance;
    return 0;
}