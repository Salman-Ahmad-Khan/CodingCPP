#include <iostream>
using namespace std;

int main()
{
    // Write a program to write a simple calculator.

    cout << "Hey, Input two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Okk," << endl
         << "Type your operator:(+,-,*,/,%) " ;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
        break;

    case '-':
        cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
        break;

    case '/':
        cout << "The division of " << a << " and " << b << " is " << a / b << endl;
        break;

    case '*':
        cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
        break;

    case '%':
        cout << "The modulus of " << a << " and " << b << " is " << a % b << endl;
        break;
    default:
        cout << "Operator not found.Please,Type a valid operator.";
    }

    return 0;
}