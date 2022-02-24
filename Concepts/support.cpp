// Second File: support.cpp
#include <iostream>
using namespace std;

extern int count; 
void write_extern(void)
{
 cout << "Count is " << count << endl;
}

/*
Here, extern keyword is being used to declare count in another file. Now compile 
these two files as follows:

$g++ main.cpp support.cpp -o write

This will produce write executable program, try to execute write and check the 
result as follows:
$./write
5
*/
