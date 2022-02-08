#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    // program to find the nCr

    cout << "Input the values of n and c of nCr: ";
    int n, r;
    cin >> n >> r;

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << nCr;

    return 0;
}