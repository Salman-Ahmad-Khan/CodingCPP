#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Check if a given character array is a palindrome or not.

    // Palindrome: Given a string s, on reversing the string we get the same string we
    // call that string is a palindrome.

    // e.g
    // racecar
    // anna
    //

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r",stdin);
// freopen("output.txt", "w",stdout);
// #endif

    cout << "Input the size of array ";
    int n;
    cin >> n;
    cout << "Input any word ";
    char arr[100];
    cin >> arr;

    bool check = 1; // suppose the given word is palindrome
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check)// or if(check==true)
    {
        cout << arr << " is a palindrome" << endl;
    }
    else
    {
        cout << arr << " is not a palindrome" << endl;
    }

    return 0;
}