#include <iostream>
using namespace std;

class Box
{
public:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y); // declared instance member function

    // void setdata(int x, int y) //instance member function
    // {
    //     a = x;
    //     b = y;
    // }
    void showdata() // instance member function
    {
        cout << endl
             << a << " " << b << endl;
    }
    complex add(complex d) // function to add two complex numbers and returns the object as complex
    {
        complex temp;
        temp.a = a + d.a;
        temp.b = b + d.b;

        return (temp);
    }
};

void complex::setdata(int x, int y) // instance member function defined outside the class using membership label i.e scope resolution operator
{
    a = x;
    b = y;
}

int main()
{

    /*
    The Only difference between structure and class is that:
    --------  the members of structures are by default public --------
                            --------and--------
    --------  the members of class are by default private     ---------

    Definition:
    ---class is a description of an object---
    ---object is an instance of a class---

    instance member variables
    - attributes,data members,fields,properties


    instance member functions
    - methods,procedures,actions,operations,services
    */

    /*
    CLASSES AND OBJECTS:

    The main purpose of C++ programming is to add object orientation to the C
    programming language and classes are the central feature of C++ that supports
    object-oriented programming and are often called user-defined types.
    A class is used to specify the form of an object and it combines data
    representation and methods for manipulating that data into one neat package.
    The data and functions within a class are called members of the class.

    C++ Class Definitions

    When you define a class, you define a blueprint for a data type. This doesn't
    actually define any data, but it does define what the class name means, that is,
    what an object of the class will consist of and what operations can be performed
    on such an object.

    A class definition starts with the keyword class followed by the class name; and
    the class body, enclosed by a pair of curly braces. A class definition must be
    followed either by a semicolon or a list of declarations. For example, we define
    the Box data type using the keyword class as follows:

    class Box
    {
     public:
     double length; // Length of a box
     double breadth; // Breadth of a box
     double height; // Height of a box
    };

    The keyword public determines the access attributes of the members of the
    class that follows it.
    *** A public member can be accessed from outside the class
    anywhere within the scope of the class object***

     You can also specify the members
    of a class as private or protected.


    Define C++ Objects

    A class provides the blueprints for objects, so basically an object is created from
    a class. We declare objects of a class with exactly the same sort of declaration
    that we declare variables of basic types.
     Following statements declare two
    objects of class Box:

    Box Box1; // Declare Box1 of type Box
    Box Box2; // Declare Box2 of type Box

    Both of the objects Box1 and Box2 will have their own copy of data members.

    Accessing the Data Members
    The public data members of objects of a class can be accessed using the direct
    member access operator (.). Let us try the following example to make the things
    clear:
    */

    Box Box1; // Declare Box1 of type Box
    Box Box2; // Declare Box2 of type Box

    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    // box 2 specification
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    // volume of box 1
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Volume of Box2 : " << volume << endl;

    /*
    It is important to note that private and protected members cannot be accessed
    directly using direct member access operator (.).
    */

    /*
    Classes & Objects in Detail
    So far, you have got very basic idea about C++ Classes and Objects. There are
    further interesting concepts related to C++ Classes and Objects

    Class member functions:
     A member function of a class is a function that
    has its definition or its prototype within the
    class definition like any other variable.

    Class access modifiers:
     A class member can be defined as public,
    private or protected. By default members
    would be assumed as private.

    Constructor & destructor:
     A class constructor is a special function in a
    class that is called when a new object of the
    class is created. A destructor is also a special
    function which is called when created object is
    deleted.

    C++ copy constructor:
     The copy constructor is a constructor which
    creates an object by initializing it with an
    object of the same class, which has been created previously.

    C++ friend functions:
     A friend function is permitted full access to
    private and protected members of a class.

    C++ inline functions:
     With an inline function, the compiler tries to
    expand the code in the body of the function in
    place of a call to the function.

    The this pointer in C++:
     Every object has a special pointer this which
    points to the object itself.

    Pointer to C++ classes:
     A pointer to a class is done exactly the same
    way a pointer to a structure is. In fact a class
    is really just a structure with functions in it.

    Static members of a class:
     Both data members and function members of
    a class can be declared as static.
    */

    complex c1; // declare an object of type complex
    c1.setdata(21, 35);
    c1.showdata();

    complex c2, c3, c4;
    c2.setdata(2, 3);
    c3.setdata(4, 5);
    c4 = c2.add(c3); // calling a function by passing an object
    c4.showdata();

    return 0;
}