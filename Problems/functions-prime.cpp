#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            return false;
        }
    }
    return true;

   
}
int main()
{
    // prime between two numbers using functions

    cout << "Input two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b << " are:" << endl;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i)) // if(isPrime(i)==true)
        {
            cout << i << " ";
        }
    }

    return 0;
}