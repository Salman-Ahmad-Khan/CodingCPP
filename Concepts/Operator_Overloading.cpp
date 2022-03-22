#include <iostream>
using namespace std;

/*
Operator Overloading:
• When an operator is overloaded with multiple jobs, it is known as operator overloading.
• It is a way to implement compile time polymorphism.

Rules to Remember
• Any symbol can be used as function name
- If it is a valid operator in C language
- If it is preceded by operator keyword

You can not overload sizeof and ?: operator
*/

class complex
{
private:
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;

        return;
    }

    void showData()
    {
        cout << a << " " << b << endl;
    }

    // ADDING TWO COMPLEX NUMBERS
    //  complex sum(complex c)
    //  {
    //      complex temp;
    //      temp.a = a + c.a;
    //      temp.b = b + c.b;

    //     return (temp);
    // }

    // ADDING TWO COMPLEX NUMBERS
    complex operator+(complex c)
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;

        return (temp);
    }

    // NEGATING A COMPLEX NUMBER
    // complex Negation()
    // {

    //     complex temp1;
    //     temp1.a = -a;
    //     temp1.b = -b;

    //     return (temp1);
    // }

    // NEGATING A COMPLEX NUMBER  ,overloading unary operator
    complex operator-()
    {

        complex temp1;
        temp1.a = -a;
        temp1.b = -b;

        return (temp1);
    }
};

// overloading unary operator PREINCREMENT
class integer
{

private:
    int a;

public:
    void setdata(int x)
    {
        a = x;
        return;
    }

    void showdata()
    {
        cout << a << endl;

        return;
    }
    // overloading unary operator PREINCREMENT
    integer operator++() // integer pre()
    {
        integer i;
        i.a = ++a;

        return (i);
    }

    // overloading unary operator POSTINCREMENT
    integer operator++(int) // integer post()
    {
        integer i;
        i.a = a++;

        return (i);
    }
};
int main()
{

    // complex c1, c2, c3;
    // c1.setData(4, 12);
    // c2.setData(6, 1);

    // c3 = c1.sum(c2);
    // c3.showData();

    complex c1, c2, c3;
    c1.setData(4, 12);
    c2.setData(6, 1);
    // c3=c1.sum(c2);
    //  c3 = c1.operator+(c2);
    c3 = c1 + c2; // we can call this function without using dot(.) operator
    // c1 called a + function,c2 is passde as an argument and what + function returns is stored in c3
    c3.showData();

    c1.setData(4, 12);
    c2.setData(6, 1);

    // c3 = c1.Negation();
    c3 = c1.operator-();
    // c3=-c1;
    c3.showData();

    integer i1, i2, i3;
    i1.setdata(29);
    i1.showdata();
    i2 = ++i1; // i2 = i1.pre()  //i2=i1.operator++()
    i2.showdata();

    i1.setdata(2);
    i1.showdata();
    i2 = i1++; // i2 = i1.post()  //i2=i1.operator++(int)
    i1.showdata();
    i2.showdata();

    return 0;
}
