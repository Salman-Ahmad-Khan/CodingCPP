#include <iostream>
using namespace std;

/*
Constructor:
• Constructor is a member function of a class.
• The name of the constructor is same as the name of the class
• It has no return type, so can't use return keyword.
• It must be an instance member function, that is, it can never be static

How to call Constructor?
• Constructor is implicitly invoked when an object is created.
• Constructor is used to solve problem of initialization.
*/

class complex
{
private:
    int a;
    int b;

public:
    // Constructor Overloading
    // Parameterised Constructors
    complex() // Default constructor
    {
        a = 0;
        b = 0;
        cout << "You've called a constructor " << a << " " << b << endl;
    }

    complex(int x, int y) // Parameterised Constructor
    {
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }

    complex(int k) // Parameterised Constructor
    {
        a = k;
        b = 0;
        cout << a << " " << b << endl;
    }

    complex(complex &c) // copy constructor
    {
        a = c.a;
        b = c.b;
        cout << a << " " << b << endl;
    }

    /*
    The copy constructor is a constructor which creates an object by initializing it
with an object of the same class, which has been created previously. The copy
constructor is used to:
 Initialize one object from another of the same type.
 Copy an object to pass it as an argument to a function.
 Copy an object to return it from a function.
If a copy constructor is not defined in a class, the compiler itself defines one.If
the class has pointer variables and has some dynamic memory allocations, then
it is a must to have a copy constructor. The most common form of copy
constructor is shown here:

classname (classname &obj)
 {
 // body of constructor
}
Here, obj is a reference to an object that is being used to initialize another
object.
*/
};

int main()
{

    complex c1(53, 31), c2;
    complex(3, 8);
    complex(51);

    complex c3(c1); // copy constructor
    // The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously.

    complex c4(29, 91);
    complex c5(c4);

    return 0;
}
