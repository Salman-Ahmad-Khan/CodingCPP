#include <iostream>
using namespace std;

int main()
{

    // Program to check if an letter is a vowel or a consonant

    cout << "Input any english letter: ";
    char c;
    cin >> c;

    int isLowercaseVowel, isUppercaseVowel;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel)

    {
        cout << c << " is a vowel.";
    }

    else

    {
        cout << c << " is a consonant.";
    }

    return 0;
}