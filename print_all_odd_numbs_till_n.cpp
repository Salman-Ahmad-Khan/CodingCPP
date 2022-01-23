#include <iostream>
using namespace std;

int main()
{
    // Write a program to print all odd numbers till n.

    cout << "Input a positive number: ";
    int n;
    cin >> n;

    cout<<"All odd numbers till "<<n<<" are:"<<endl;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}