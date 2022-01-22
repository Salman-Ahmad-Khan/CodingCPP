#include <iostream>
using namespace std;

int main()
{
    // Binary to decimal conversion:

    cout << "Input any binary number: ";
    long long int binary;
    cin >> binary;

    cout << "Decimal  Equvivalent of " << binary << " is ";
    int last_bit, base = 1, decimal = 0;
    while (binary != 0)
    {
        last_bit = binary % 10; // gives the last bit of binary number
        decimal = decimal + last_bit * base;
        binary = binary / 10; // removes the last bit of binary
        base = base * 2;
    }
    cout << decimal << endl;

    return 0;
}