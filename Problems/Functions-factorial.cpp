#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
//program to find the factorial of a number

    cout << "Input any positive number: ";
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << "The factorial of " << n << " is " << ans;

    return 0;
}