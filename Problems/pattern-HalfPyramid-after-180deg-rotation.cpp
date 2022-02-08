#include <iostream>
using namespace std;

/*
Loops within loops are termed as nested loops.
The easiest way to understand the working of a nested loop is by solving pattern printing
problems.
*/

int main()
{
    // Print Half Pyramid after 180 degree rotation

    cout << endl
         << "Input the number of rows ";
    int rows;
    cin >> rows;

    cout << "Half Pyramid after 180 degree rotation:" << endl
         << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= rows - i)
            {
                cout << "  ";
            }
            else
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}