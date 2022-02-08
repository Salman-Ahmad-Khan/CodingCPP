#include <iostream>
#include <cmath>
using namespace std;

/*
Armstrong Numbers
Armstrong numbers are numbers which have their sum of cube of individual
digits equal to the number itself.
E.g 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.
*/
int main()
{
    // Write a program to check if a number is Armstrong number

    cout << "Input any number: ";
    int num;
    cin >> num;

    int sum = 0, original = num;

    while (num != 0)
    {
        int last_digit = num % 10;
        // sum += pow(last_digit, 3);
        sum += last_digit * last_digit * last_digit;
        num /= 10;
    }

    if (sum == original)
    {
        cout << original << " is an Armstrong number" << endl;
    }
    else
    {
        cout << original << " is not an Armstrong number" << endl;
    }

    return 0;
}