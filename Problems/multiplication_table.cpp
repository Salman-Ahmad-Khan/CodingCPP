#include <iostream>
using namespace std;

int main()
{
//Program to display multiplication table of any number upto 10

cout<<"Input any number: ";
int n;
cin>>n;

for(int i=1;i<=10;i++)
{
    cout<<n<<" * "<<i<<" = "<< n*i <<endl;
}

    
    return 0;
}