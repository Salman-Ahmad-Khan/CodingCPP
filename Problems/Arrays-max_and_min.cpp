#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Finding Maximun and Minimum element

    cout << "Input the size of an array ";
    int n;
    cin >> n;

    int Numbers[n];
    cout << "Input the elements of an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> Numbers[i];
    }

    cout << "Elements of an array\n";
    for (int i = 0; i < n; i++)
    {
        cout << Numbers[i] << " ";
    }

    // supposes the first element as max and min
    //  int maxNum = Numbers[0];
    //  int minNum = Numbers[0];

    // for (int i = 0; i < n; i++)
    // {
    //     if (Numbers[i] > maxNum)
    //         maxNum = Numbers[i];

    //     if (Numbers[i] < minNum)
    //     {
    //         minNum = Numbers[i];
    //     }
    // }

    // Another way to find max and min: The better way,actually

    // definitions of INT_MIN and INT_MAX are in header file <climits>

    int maxNum = INT_MIN; // allocating the highest  min number possible in c++
    int minNum = INT_MAX; // allocating the highest  max number possible in c++

    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, Numbers[i]); // max(n1,n2) will give the max of two given numbers
        //Returns:The greater of the parameters.


        minNum = min(minNum, Numbers[i]); // mix(n1,n2) will give the mix of two given numbers
        //Returns:The lesser of the parameters.

    }

    cout << endl
         << "Maximun " << maxNum << " Minimum " << minNum;

    return 0;
}