#include <iostream>
using namespace std;

int main()
{

/*
Char Arrays:
Arrays of characters is known as Character Arrays.
Declaration
To declare a character array of n size, we do
char arr[n+1];
Note: We declare an array of n+1 as 0 to n-1 indices store the actual string and
nth character stores ‘\0’ (null character).

We can also directly take input if there are no spaces between the characters in
the word
cin >> arr;
In the similar way, we can output the character array
cout << arr;

*/

//display characters

    // char arr[100]="Salman";

    // int i=0;
    // while (arr[i]!='\0')
    // {
    //     cout<<arr[i]<<endl;
    //     i++;
    // }



    //take input from user
    // char name[50];

    // cin>>name;
    // cout<<name;
    // cout<<name[2];


    //take multi words as input or a sentence

    cout<<"Input the size a sentence ";
    int n;
    cin>>n;
    cin.ignore();

cout<<"Input the sentence ";
    char arr[n];
    cin.getline(arr,n);
    cin.ignore();


    cout<<arr<<endl;

    
    return 0;
}