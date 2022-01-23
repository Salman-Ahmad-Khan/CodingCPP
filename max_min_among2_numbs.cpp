#include <iostream>
using namespace std;

int main()
{
    // Program to find maximum, minimum among two numbers.
    cout << "Input any two numbers: ";
    int a, b;
    cin >> a >> b;

    int max, min;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;

    return 0;
}