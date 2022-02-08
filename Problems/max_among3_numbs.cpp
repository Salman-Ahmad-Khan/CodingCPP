#include <iostream>
using namespace std;

int main()
{
    // Program to find the maximum among three numbers.

    cout << "Input any three numbers: ";
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Maximum:" << a << endl;
        }
        else
        {
            cout << "Maximum:" << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum:" << b << endl;
        }
        else
        {
            cout << "Maximum:" << c << endl;
        }
    }

    return 0;
}