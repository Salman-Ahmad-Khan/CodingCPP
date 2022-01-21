#include <iostream>
using namespace std;

/*
Loops within loops are termed as nested loops.
The easiest way to understand the working of a nested loop is by solving pattern printing
problems.
*/

int main()
{
    // Print Inverted Half Pyramid using numbers
    cout << endl
         << "Input the number of rows ";
    int rows;
    cin >> rows;

    cout << "Inverted Half Pyramid using numbers:" << endl
         << endl;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}