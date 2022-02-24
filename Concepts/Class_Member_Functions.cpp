#include <iostream>
using namespace std;


class Box
{
public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box

    // Member functions declaration
    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

// Member functions definitions outside the class
double Box::getVolume(void)
{
    return length * breadth * height;
}
void Box::setLength(double len)
{
    length = len;
}
void Box::setBreadth(double bre)
{
    breadth = bre;
}
void Box::setHeight(double hei)
{
    height = hei;
}


int main()
{

/*
    Class member functions:
    A member function of a class is a function that has its definition or its prototype
    within the class definition like any other variable. It operates on any object of
    the class of which it is a member, and has access to all the members of a class
    for that object.
    Let us take previously defined class to access the members of the class using a
    member function instead of directly accessing them:

    class Box
    {
     public:
     double length; // Length of a box
     double breadth; // Breadth of a box
     double height; // Height of a box
     double getVolume(void);// Returns box volume
    };
    Member functions can be defined within the class definition or separately
    using scope resolution operator, ::.
     Defining a member function within the class definition declares the function inline, even if you do not use the inline
    specifier.
     So either you can define getVolume() function as below:

     class Box
    {
     public:
     double length; // Length of a box
     double breadth; // Breadth of a box
     double height; // Height of a box

     double getVolume(void)
     {
     return length * breadth * height;
     }

    };

    If you like, you can define the same function outside the class using the scope
    resolution operator (::) as follows:
    double Box::getVolume(void)
    {
     return length * breadth * height;
    }

    Here, only important point is that you would have to use class name just before
    :: operator. A member function will be called using a dot operator (.) on a object
    where it will manipulate data related to that object only as follows:

    Box myBox; // Create an object
    myBox.getVolume(); // Call member function for the object

    */

    Box Box1; // Declare Box1 of type Box
    Box Box2; // Declare Box2 of type Box

    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;


    
    return 0;
}