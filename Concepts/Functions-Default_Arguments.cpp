#include <iostream>
using namespace std;

int sum(int a, int b = 20) // int b=20,is a default argument
{
    int result;
    result = a + b;

    return (result);
}

int main()
{
    /*
    Default Values for Parameters/Arguments:
    When you define a function, you can specify a default value for each of the last
    parameters. This value will be used if the corresponding argument is left blank
    when calling to the function.

    This is done by using the assignment operator and assigning values for the
    arguments in the function definition. If a value for that parameter is not passed
    when the function is called, the default given value is used, but if a value is
    specified, this default value is ignored and the passed value is used instead.

    */
    // local variable declaration:
    cout << "Input two numbers to get the total sum. ";

    int a, b;

    cin >> a >> b;
    int result;
    // calling a function to add the values.
    result = sum(a, b);
    cout << "Total value is :" << result << endl;

     cout << "Input one number(another i.e default value is 20) to get the total sum. ";
     cin>>a;
    // calling a function again as follows.
    result = sum(a);
    cout << "Total value is :" << result << endl;

    return 0;
}