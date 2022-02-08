#include <iostream>
using namespace std;

int main()
{
    // Write a program to check if a given number is prime or not.

    cout << "Input a positive number: ";
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1 is NOT a prime number" << endl;
    }
    
    int i;
    for (i = 2; i < n; ++i)
    {
        if (n % i == 0) // found a factor of n

        {
            cout <<"'"<< n<<"'" << " is NOT a prime number" << endl;
            break;
        }
    }
    if (i == n) // loop has completed all iterations

    {
         cout <<"'"<< n<<"'" << " is a prime number" << endl;
    }

    return 0;
}