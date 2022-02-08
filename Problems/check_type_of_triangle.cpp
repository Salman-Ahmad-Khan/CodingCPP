#include <iostream>
using namespace std;

int main()
{
    //Program to check if a triangle is scalene, isosceles or equilateral

    cout << "Input three sides of a triangle: ";
    int sidea, sideb, sidec;
    cin >> sidea >> sideb >> sidec;

    if (sidea == sideb && sideb == sidec)
    {
        cout << "This is an equilateral triangle." << endl;
    }
    else if (sidea == sideb || sidea == sidec || sideb == sidec)
    {
        cout << "This is an isosceles triangle. " << endl;
    }
    else
    {
        cout << "This is a scalene triangle. \n ";
    }

    return 0;
}