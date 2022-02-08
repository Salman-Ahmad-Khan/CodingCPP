#include <iostream>
using namespace std;

void fibonacci_series(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{

    // display fibonacci series

    cout << "How many terms you want to print? ";
    int n;
    cin >> n;

    fibonacci_series(n);

    return 0;
}