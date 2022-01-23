#include <iostream>
using namespace std;

int main()
{
    // Program to find sum of natural numbers till n.

    cout << "Input any naturral number: ";
    int n;
    cin >> n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum += counter;
    }

    cout << "The sum of first " << n << " numbers is " << sum << endl;

    return 0;
}