#include <iostream>
using namespace std;

/*
Jumps in Loops :
Jumps in loops are used to control the flow of loops. There are two statements
used to implement jump in loops - Continue and Break. These statements are
used when we need to change the flow of the loop when some specified
condition is met

*/
int main()
{

    /*
    1. Continue :
    Continue statement is used to skip to the next iteration of that loop. This
    means that it stops one iteration of the loop. All the statements present
    after the continue statement in that loop are not executed.
    */

    int i;
    for (i = 1; i <= 20; i++)
    {

        if (i % 3 == 0)
        {
            continue;
            cout << "Hi";
        }
        cout << i << " ";
    }

    /*
    In this for loop, whenever i is a number divisible by 3, it will not be printed
as the loop will skip to the next iteration due to the continue statement.
Hence, all the numbers except those which are divisible by 3 will be printed.
*/

    /*
    2. Break :
    Break statement is used to terminate the current loop. As soon as the break
    statement is encountered in a loop, all further iterations of the loop are
    stopped and control is shifted to the first statement after the end of loop

    */
    cout << endl;

    int j;
    for (j = 1; j <= 20; j++)
    {

        if (j == 11)
        {
            break;
        }
        cout << j << " ";
    }

    /*
    In this loop, when j becomes equal to 11, the for loop terminates due to 
break statement, Hence, the program will print numbers from 1 to 10 
only.
*/
    return 0;
}