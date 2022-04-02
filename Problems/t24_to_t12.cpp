#include <iostream>
using namespace std;

class time12
{
private:
    bool pm;
    int hrs;
    int mins;

public:
    time12() : pm(true), hrs(0), mins(0)
    {
    }

    time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
    {
    }

    void display()
    {
        cout << hrs << ":";
        if (mins < 10)
        {
            cout << "0";
        }
        cout << mins << " ";
        string am_pm = pm ? "p.m" : "a.m";
        cout << am_pm;
    }
};

class time24
{
    int hours;
    int minutes;
    int seconds;

public:
    time24() : hours(0), minutes(0), seconds(0) {}

    time24(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    void display()
    {

        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";

        if (seconds < 10)
            cout << "0";
        cout << seconds;
    }

    operator time12();
};

time24::operator time12()
{

    int hrs24 = hours;
    bool pm = hours < 12
}

main()
{
}