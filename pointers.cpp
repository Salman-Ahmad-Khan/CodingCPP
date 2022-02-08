#include <iostream>
using namespace std;

int main()
{
/*
Pointers:
Pointers are variables that store the address of other variables.

Syntax:
data_type *name_of_pointer
e.g:
int *myIntPointer
char *myCharPointer

Getting started with the Pointers:

Every variable is stored in the memory and each memory location has its own
memory address. It enables us to pass variables by reference.

‘&’ Operator: It gives the address of the variable.
‘*’ Operator: It gives the value stored at the address, i.e dereferences the value
stored at the address.

Benifit:
Throught pointers we can access and modify the variables.
*/


   // Working Demo
   int a=30;
   int* aptr;
   aptr=&a;

   //or directly do this,initialisation and declaration simultaneously
//    int* aptr=&a;

   cout<<&a<<endl<<aptr<<endl<<*aptr<<endl;
   *aptr=2103;
   cout<<*aptr<<endl<<endl;

   /*
   In the above example,
1. We declared an integer variable ‘a’, and an integer pointer ‘aptr’.
2. The address of ‘a’ (&a) is stored in aptr.
3. cout << *aptr; gives the value stored at the memory address.
4. *aptr = 20 changes the value at the memory address to 20. Value of ‘a’ gets
changed to 20.

*/


/*Array Pointers:
In C++, The name of the array is a pointer that points to the first element of the
array.
*/

float ary[]={12.32,25.36,78.15};
cout<<ary<<endl;//it is same as &ary[0],i.e it wil print the address of of first element of array ,name of the array is a pointer that points to the first element of the
//array.

cout<<*ary<<endl;//it will print the first element of array,*ary takes the address of ary[0] as argument and return the content whose address is its argument.
float *p=ary;
for(int i=0;i<3;i++){
   // cout<<*(ary+i)<<" ";
   cout<<*(p+i)<<" ";//both statements are same

   /*
   1.*(arr + i) is equivalent to arr[i].
2.(arr + i) is the address of the ith element of the array.
*/
}



    return 0;
}