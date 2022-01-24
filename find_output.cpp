#include <iostream>
using namespace std;

int main()
{
//Give the output of the following programs.

int a=5;
a=1,2,3;
cout<<a<<endl; //(Priority for the values assigned to any variable is given from left to right

int b=5;
b=(1,2,3);
cout<<b<<endl;
//(Priority for the values inside a brackets () assigned to any variable is given from right to left.)


// cout<<(3*2--)<<endl;//(2-- stands meaningless)


int i=10;
i++;
i*i;
cout<<i<<endl; //(i++ alone store the result in variable i.)



    
    return 0;
}