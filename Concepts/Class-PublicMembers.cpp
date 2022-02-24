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

The public Members
A public member is accessible from anywhere outside the class but within a 
program. You can set and get the value of public variables without any member 
function as shown in the following example:
*/

#include <iostream>
using namespace std;


class Line
{
 public:
 double length;
  void setLength( double len );
 double getLength( void );
};

// Member functions definitions
double Line::getLength(void)
{
 return length ;
}
void Line::setLength( double len )
{
 length = len;
}


// Main function for the program
int main( )
{
 Line line;

 // set line length
 line.setLength(6.0);
 cout << "Length of line : " << line.getLength() <<endl;

 // set line length without member function
 line.length = 10.0; // OK: because length is public
 cout << "Length of line : " << line.length <<endl;
 
 return 0;
}
