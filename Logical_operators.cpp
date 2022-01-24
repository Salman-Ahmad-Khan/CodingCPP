#include <iostream>
using namespace std;

int main()
{
    /*
    Logical Operators:
    Logical operators are used to connect multiple expressions or conditions
    together.
    We have 3 basic logical operators.
    */

    /*
    Suppose : A=0 and B=1

    && AND operator. Gives true if both operands are non-zero
    (A && B) is
    false

    || OR operator. Gives true if atleast one of the two
    operands are non-zero.
    (A || B) is
    true

    ! NOT operator. Reverse the logical state of operand
    !A is true
    */

    /*If we need to check whether a number is divisible by both 2 and 3, we will
use AND operator
*/

    int num;
    cin >> num;

    if ((num % 2 == 0) && (num % 3 == 0))
    {
        cout << "divisible by both";
    }

    else if ((num % 2 == 0) || (num % 3 == 0))
    {
        cout << "divisible by one";
    }
    return 0;
}