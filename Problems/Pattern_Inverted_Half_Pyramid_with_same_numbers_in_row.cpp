#include <iostream>
using namespace std;

int main()
{
    // Print Inverted Half Pyramid with same numbers in a row

    cout << endl
         << "Input the number of rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}