#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            
            return i; // returns the index of key
        }
    }
    return -1; // returns -1,if key not found
}

int main()
{

    cout << "Input the size of an array ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Input the elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements ";
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }

    cout << endl
         << "Input the number you want to search ";
    int key;
    cin >> key;

    cout << linearSearch(arr, n, key); //calling a function

    return 0;
}