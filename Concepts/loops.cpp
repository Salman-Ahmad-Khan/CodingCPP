#include <iostream>
using namespace std;

/*
Loops in C++ :

A loop is used for executing a block of statements repeatedly until a particular
condition is satisfied. A loop consists of an initialization statement, a test
condition and an increment statement.
*/

int main()
{
    // // Don't run all the loops simultaneously

    // for loop:
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    /*
    The for loop is initialized by the value 1, the test condition is i<=5 i.e the loop is
executed till the value of i remains lesser than or equal to 5. In each iteration
the value of i is incremented by one by doing i++
*/

    // while loop
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }
    /*
    The while loop is initialized by the value 1, the test condition is i<=5 i.e the loop
    is executed till the value of i remains lesser than or equal to 5. In each iteration
    the value of i is incremented by one by doing i++.
    */

    // do while loop
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 5);
    /*
    The do while loop variable is initialized by the value 1, in each iteration the
    value of i is incremented by one by doing i++, the test condition is i<=5 i.e the
    loop is executed till the value of i remains lesser than or equal to 5. Since the
    testing condition is checked only once the loop has already run so a do while
    loop runs at least once.
    */

    return 0;
}