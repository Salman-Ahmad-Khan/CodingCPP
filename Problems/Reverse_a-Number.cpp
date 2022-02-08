#include <iostream>
using namespace std;

int main()
{

    /*
     Write a program to reverse a number:
    E.g Given a number 1879 we need to convert it to 9781.
    100020 will be converted to 20001 (Note: We need to remove the trailing zeroes).
    */
    cout << "Input any number: ";
    long long int numb;
    cin >> numb;

    long long int reverse = 0, original = numb;
    while (numb != 0)
    {
        int last_digit = numb % 10;
        reverse = reverse * 10 + last_digit;
        numb = numb / 10;
    }

    cout << "The reverse of " << original << " is " << reverse << endl;

    return 0;
}