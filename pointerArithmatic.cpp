#include <iostream>
using namespace std;




int main()
{

    // Pointer Arithmatic

    /*
    Pointer Expressions and Pointer Arithmetic
    A limited set of arithmetic operations can be performed on pointers. A pointer may be:


    1.incremented ( ++ )
    pointer when incremented always point to immediately next block of its own type

    2.decremented ( — )

    3.an integer may be added to a pointer ( + or += )
    pointer+n=pointer(baseAdress)+ sizeof(type_of_pointer)*n

    4.an integer may be subtracted from a pointer ( – or -= )
    pointer+n=pointer(baseAdress)- sizeof(type_of_pointer)*n

    5.we acn subtract two addresses of same type
    {
        int a,b;
        int *p,*q;
        p=&a;
        q=&b;
        q-p;//is possible but it does not literally subtarct,basically it gives the number of blocks.
        i.e.
        pointer1-pointer2=(literal subtraction)/(sizeof(type_of_pointer))
    }
    Pointer arithmetic is meaningless unless performed on an array.
    Note : Pointers contain addresses. Adding two addresses makes no sense, because there is no idea what it would point to. Subtracting two addresses lets you compute the offset between these two addresses.*/

    // Incrementing a Pointer
    /*
    We prefer using a pointer in our program instead of an array because the variable pointer can be incremented, unlike the array name which cannot be incremented because it is a constant pointer. The following program increments the variable pointer to access each succeeding element of the array −
    */
    int var[3] = {10, 100, 200};
    int *pt;

    // let us have array address in pointer.
    pt = var;

    for (int i = 0; i < 3; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << pt << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *pt << endl;

        // point to the next location
        pt++;
    }

cout<<endl;
        /*
        Decrementing a Pointer
  The same considerations apply to decrementing a pointer, which decreases its value by the number of bytes of its data type as shown below −
  */
        int ar[3] = {101, 1001, 2001};
        int *ptr;

        // let us have address of the last element in pointer.
        ptr = &ar[3 - 1];

        for (int i = 3; i > 0; i--)
        {
            cout << "Address of ar[" << i << "] = ";
            cout << ptr << endl;

            cout << "Value of ar[" << i << "] = ";
            cout << *ptr << endl;

            // point to the previous location
            ptr--;
        }

cout<<endl;
        /*
        Array Name as Pointers:
        An array name acts like a pointer constant. The value of this pointer constant is the address of the first element.
        For example, if we have an array named val then val and &val[0] can be used interchangeably.
         */

        // Declare an array
    int val[3] = {5, 10, 15};

    // Declare pointer variable
    int *pr;

    // Assign address of val[0] to ptr.
    // We can use ptr=&val[0];(both are same)
    pr = val;
    cout << "Elements of the array are: ";
    cout << pr[0] << " " << pr[1] << " " << pr[2]<<endl<<endl;

        return 0;
    }