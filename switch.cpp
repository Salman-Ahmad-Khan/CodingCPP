#include <iostream>
using namespace std;

int main()
{

    /*
    Switch Statement :
    Switch case statements are a substitute for long if statements that compare a
    variable to multiple values. After a match is found, it executes the
    corresponding code of that value case.
    */
    /*

    switch (n)
{
 case 1: // code to be executed if n == 1;
 break;
 case 2: // code to be executed if n == 2;
 break;
 default: // code to be executed if n doesn't match any of the above cases
}

*/

    /*
    x The variable in switch should have a constant value.
    x The break statement is optional. It terminates the switch
    statement and moves control to the next line after switch.
    x If break statement is not added, switch will not get terminated and
    it will continue onto the next line after switch.
    x Every case value should be unique.
    x Default case is optional. But it is important as it is executed when
    no case value could be matched.


        */
    cout << "Input your age: ";

    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "Your age is " << age << endl;
        break;
    case 20:
        cout << "Your age is " << age << endl;
        break;
    default:
        cout << "You know your age,right!";
    }
    return 0;
}