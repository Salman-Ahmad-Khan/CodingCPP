#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;     // 0 to infinite
    float inches; // 0 to 12
public:
    // required constructors
    Distance() : feet(0), inches(0)
    {
    }
    Distance(int f, int i) : feet(f), inches(i)
    {
    }
    // method to display distance
    void displayDistance()
    {
        cout << "F= " << feet << " I=" << inches << endl;
    }
    // overloaded minus (-) operator
    Distance operator-()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet, inches);
    }
    // overloaded < operator
    bool operator<(Distance d)
    {
        if (feet < d.feet)
        {
            return true;
        }
        if (feet == d.feet && inches < d.inches)
        {
            return true;
        }
        return false;
    }

    // overloaded > operator
    bool operator>(Distance d1)
    {
        if (feet > d1.feet)
        {
            return true;
        }
        if (feet == d1.feet && inches > d1.inches)
        {
            return true;
        }
        return false;
    }

    // overloaded assignment operator (=)
    void operator=(Distance d2)
    {
        feet = d2.feet;
        inches = d2.inches;
    }

    // overloaded + operator
    Distance operator+(Distance d3)
    {
        Distance temp;
        temp.feet = feet + d3.feet;
        temp.inches = inches + d3.inches;
        if (temp.inches > 12)
        {
            int extra_feet = temp.inches / 12;
            temp.feet += extra_feet;
            temp.inches -= extra_feet * 12;
        }

        return (temp);
    }
    // overloaded - operator
    Distance operator-(Distance d3)
    {
        Distance temp;
        temp.feet = feet - d3.feet;
        temp.inches = inches - d3.inches;
        if (temp.inches > 12)
        {
            int extra_feet = temp.inches / 12;
            temp.feet -= extra_feet;
            temp.inches -= extra_feet * 12;
            // temp.feet--;
            // temp.inches -= 12;
        }

        return (temp);
    }
    // overloaded * operator
    Distance operator*(Distance d3)
    {
        Distance temp;
        temp.feet = feet * d3.feet;
        temp.inches = inches * d3.inches;

        if (temp.inches > 12)
        {
            int extra_feet = temp.inches / 12;
            temp.feet += extra_feet;
            temp.inches -= extra_feet * 12;
        }

        return (temp);
    }
};

main()
{

    Distance D1(11, 10), D2(5, 11);
    cout << "First Distance(D1) : ";
    D1.displayDistance();
    cout << "Second Distance(D2) :";
    D2.displayDistance();

    if (D1 < D2) // overloaded < operator
    {
        cout << "D1 is less than D2 " << endl;
    }
    else
    {
        cout << "D2 is less than D1 " << endl;
    }

    if (D1 > D2) // overloaded > operator
    {
        cout << "D1 is greater than D2 " << endl;
    }
    else
    {
        cout << "D2 is greater than D1 " << endl;
    }

    // use assignment operator
    D1 = D2; // overloaded < operator
    cout << "First Distance(D1) = Second Distance(D2): ";
    D1.displayDistance();

    // adding two objects of class Distance
    Distance D3 = D1 + D2; // First Distance(D1) = Second Distance(D2) = :F= 5 I=11
    cout << "addition of D1(5,11) and D2(5,11) is ";
    D3.displayDistance();

    Distance D4, D5(14, 52), D6(4, 2);
    // Subtracting two objects of class Distance
    D4 = D5 - D6;
    cout << "subtraction of D5(14,52) and D6(4,2) is ";
    D4.displayDistance();

    // multiplying two objects of class Distance
    Distance D7 = D5 * D6;
    cout << "multiplication of D5(14,52) and D6(4,2) is ";
    D7.displayDistance();
}