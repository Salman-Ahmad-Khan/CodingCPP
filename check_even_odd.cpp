#include <iostream>
using namespace std;

int main()
{

    cout << "Input any number: ";
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << n << " is Odd Number" << endl;
    }
    else
    {
        cout << n << " is Even Number" << endl;
    }

    return 0;
}