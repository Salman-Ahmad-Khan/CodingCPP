#include <iostream>
using namespace std;

/*
Loops within loops are termed as nested loops.
The easiest way to understand the working of a nested loop is by solving pattern printing
problems.
*/

int main()
{
    // Print half pyramid with 0-1 pattern

    cout << endl
         << "Input the number of rows ";
    int rows;
    cin >> rows;

    cout << "half pyramid with 0-1 pattern:" << endl
         << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
                cout << 0 << " ";
        }

        cout << endl;
    }

    return 0;
}