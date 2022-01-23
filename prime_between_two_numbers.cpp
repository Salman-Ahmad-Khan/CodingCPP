#include <iostream>
using namespace std;

int main()
{
    // Write a program to print all prime numbers in a given range

    cout << "Input any two positive numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b << " are:" << endl;
    for (int num = a; num <= b; num++)
    {

        int j;
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
                break;
        }
        if (j == num)
            cout << num << " ";
    }

    return 0;
}