/*
Class Access Modifiers:
Data hiding is one of the important features of Object Oriented Programming
which allows preventing the functions of a program to access directly the internal representation of a class type. The access restriction to the class
members is specified by the labeled public, private, and protected sections
within the class body. The keywords public, private, and protected are called
access specifiers.

A class can have multiple public, protected, or private labeled sections. Each
section remains in effect until either another section label or the closing right
brace of the class body is seen. The default access for members and classes is
private.

class Base {
 public:
 // public members go here
 protected:
 // protected members go here
 private:
 // private members go here
};


The private Members:
A private member variable or function cannot be accessed, or even viewed from
outside the class. Only the class and friend functions can access private
members.
By default all the members of a class would be private, for example in the
following class width is a private member, which means until you label a
member, it will be assumed a private member:

class Box
{
 double width;
 public:
 double length;
 void setWidth( double wid );
 double getWidth( void );
};

Practically, we define data in private section and related functions in public
section so that they can be called from outside of the class as shown in the
following program.


*/

#include <iostream>
using namespace std;

class Box
{
public:
    double length;
    void setWidth(double wid);
    double getWidth(void);

private:
    double width;
};

// Member functions definitions
double Box::getWidth(void)
{
    return width;
}
void Box::setWidth(double wid)
{
    width = wid;
}

// Main function for the program
int main()
{
    Box box;

    // set box length without member function
    box.length = 10.0; // OK: because length is public
    cout << "Length of box : " << box.length << endl;

    // set box width without member function
    //  box.width = 13.13; // Error: because width is private

    box.setWidth(19.25); // Use member function to set it.
    cout << "Width of box : " << box.getWidth() << endl;
    return 0;
}
