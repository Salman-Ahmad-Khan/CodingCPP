#include <iostream>
using namespace std;

int main()
{
    /*
Decision making:
if/else
The if block is used to specify the code to be executed if the condition specified
in if is true, the else block is executed otherwise.
*/
    cout << "Input your age ";
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote.";
    }
    else
    {
        cout << "Not eligible for voting.";
    }

    /*
    else if :
To specify multiple if conditions, we first use if and then the consecutive
statements use else if.
*/
    /*
       nested if :
       To specify conditions within conditions we make the use of nested ifs.
       */
    cout << endl
         << "Input two numbers: ";
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "Both the numbers are equal";
    }
    else if (x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    else
    {
        cout << y << " is greater than " << x << endl;
    }

    return 0;
}