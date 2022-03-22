#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void set_data(int, int);
    // void set_data(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }
    void show_data();
    // void show_data()
    // {
    //     cout << "complex number: " << a << " + i" << b << endl;
    // }

    complex add_complex(complex m)
    {
        complex temp;
        // member function can access caller object (c1) directly
        temp.a = a + m.a;
        temp.b = b + m.b;

        return (temp);
    }
};

class account
{
private:
    float balance;
    static float roi;

public:
    void setBalance(float b)
    {
        balance = b;
    }

    void show()
    {
        cout << "balance: " << balance << "  roi: " << roi << endl;
    }
    static void setRoi(float r)
    {
        roi = r;
    }
};

float account::roi = 13.52;

// defined member functions outside the class using scope resolution operator(membership label)
void complex::set_data(int x, int y)
{
    a = x;
    b = y;
}

void complex::show_data()
{
    cout << "complex number: " << a << " + i" << b << endl;
}

int main()
{
    complex c1, c2, c3;  // declared three objects of class complex
    c1.set_data(21, 37); // c1 is a caller object
    c1.show_data();

    // class object as an argument
    // if we have to add two complex numbers
    c1.set_data(5, 4);
    c2.set_data(10, 5);

    c3 = c1.add_complex(c2); // class object as an argument // member function can access caller object (c1) directly
    c3.show_data();

    account a1;
    a1.setBalance(53.21f);

    a1.show();
    a1.setBalance(896.321f);
    a1.show();
    account::setRoi(15.00f); // calling static member function without object
    a1.show();

    return 0;
}