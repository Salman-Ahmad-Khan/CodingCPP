#include <iostream>
using namespace std;

int main()
{

//Array:
//Array is a list of variables of similar data type.

/*
An Array is a data structure used to store blocks of information in contiguous
memory allocation. The data can be integer, strings, characters, class objects, etc.
*/

//Syntax
// <data_type> array_name[size]
//e.g
//int intArray[150]
//char characterArray[120]


int arr[5]={1,2,3,4,5};
cout<<arr[3]; //indexing


cout<<endl<<"Input the size of an array ";
int n;
cin>>n;

int array[n];
cout<<endl<<"Input the elements now: ";
for(int i=0;i<n;i++)
{
    cin>>array[i];
}


cout<<"Array Elements:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
    
    return 0;
}