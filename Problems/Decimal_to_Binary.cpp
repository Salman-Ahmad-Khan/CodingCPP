#include <iostream>
using namespace std;

int main()
{
    // Decimal to binary conversion:
    
    cout << "Input any decimal number: ";
    long long int decimal;
    cin >> decimal;
    cout << "Binary  Equvivalent of " << decimal << " is ";
    int last_digit, base = 1;
    long long binary = 0;

    while (decimal != 0)
    {
        last_digit = decimal % 2;
        binary = binary + last_digit * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    cout << binary << endl;

    return 0;
}