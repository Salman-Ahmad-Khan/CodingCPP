#include <iostream>
using namespace std;

/*
A destructor is a special member function of a class that is executed whenever
an object of it's class goes out of scope or whenever the delete expression is
applied to a pointer to the object of that class.
A destructor will have exact same name as the class prefixed with a tilde (~)
and it can neither return a value nor can it take any parameters. Destructor can
be very useful for releasing resources before coming out of the program like
closing files, releasing memories etc.



Destructor:
• Destructor is an instance member function of a class
• The name of the destructor is same as the name of a class but preceded by tilde (~) symbol
• Destructors can never be static
• Destructor has no return type
• Destructor takes no argument (No overloading is possible)
• It is invoked implicitly when an object is going to destroy
• Destructor is the last function running in the life of an object
*/

class complex
{
private:
    int a;
    int b;

public:
    ~complex() // This is the destructor definition
    {
        cout << "Object is being deleted" << endl;
    };
};

void fun()
{
    complex c1;
}

main()
{

    fun();
}
