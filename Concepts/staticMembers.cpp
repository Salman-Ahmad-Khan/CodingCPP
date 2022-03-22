#include <iostream>
using namespace std;

class account
{
private:
    int balance;                   // instance member variable(made for every object)
    static float rate_of_interest; // static member variable or class variable

public:
    void setbalance(int b)
    {
        balance = b;
    }
    //     void setrate_of_interest(float r)
    //     {
    // rate_of_interest=r;
    //     }
    static void setrate_of_interest(float r) // static member function(access only static member variable)
    {
        rate_of_interest = r;
    }
};
// Static Member variable
//   Declared inside the class body
// must be defined outside the class
float account::rate_of_interest = 13.5f;

int main()
{
    /*
   1. Static Local Variable:
• Concept as it is taken from C
• They are by default initialized to zero
• Their lifetime is throughout the program

void fun()
{
    static int x; //it is created only once
    int y; //created every time when we call/invoke a fun()
}


2. Static Member variable:
• Declared inside the class body
• Also known as class member variable
• They must be defined outside the class
• Static member variable does not belong to any object, but to the whole class.
• There will be only one copy of static member variable for the whole class.
• Any object can use the same copy of class variable
• They can also be used with class name .



3.Static Member Function:
• They are qualified with the keyword static.
• They are also called class member functions
• They can be invoked with or without object
• They can only access static members of the class.
*/
    account a1;
    a1.setrate_of_interest(6.215f); // calling with object

    account::setrate_of_interest(4.235f); // calling without object

    return 0;
}
