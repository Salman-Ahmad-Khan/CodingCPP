#include <iostream>
using namespace std;

int main()
{
    // Program to add only positive numbers

cout<<"\nIf you want to EXIT from the program, please type any negative number"<<endl;

    cout << "Input a number: ";
    int numb;
    cin >> numb;

    int sum = 0;
    while (numb >= 0)
    {

        sum += numb;
        cout << "Input another number: ";
        cin >> numb;
    }

    cout << "\nThe sum is of positive numbers is: " << sum << endl;

    return 0;
}