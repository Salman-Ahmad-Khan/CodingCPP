#include <iostream>
// To use strings in a program, you need to include a header called string.
#include <string>
//To sort a string, we need to include a header file known as algorithm
#include<algorithm>


using namespace std;

int main()
{
    // Declaring a string

    string str1 = "Salman"; // It declares a string of value "Salman".
    cout << str1 << endl;

    string str2(10, 'S'); // It declares a string of size 10 with all characters 'S'.
    cout << str2 << endl;

    string copy_str1(str1); // It declares a copy of the string str1.

    cout << copy_str1 << endl;


    //Taking Input
//We use cin to input the string.

string str4;
// cin>>str4; //for cin whitespace is a data separator,so it won't take multi words as input.
// cout<<str4<<endl;

//Using getline() function: To input the string with space we use getline() function instead of cin.

string str5;
getline(cin, str5);
cout << str5 << endl;

// Different functions of string

/*
1.append(): Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string.
*/
string str6="Sal";
string str7="man";
cout<<str6<<endl;
str6.append(str7);
// str6+=str7;// str6=str6+str7;
cout<<str6<<endl;



/*
2. assign(): Assigns new string by replacing the previous value (can also be
done using ‘=’ operator).
*/
string str8="previous string";
cout<<str8<<endl;
str8.assign("replaced string");
// str8="replaced string";
cout<<str8<<endl;



/*
3. at(): Returns the character at a particular position (can also be done using ‘[]’ operator). Its time complexity is O(1).
*/

string str9="complexity";
cout<<str9.at(3)<<endl;
// cout<<str9[3]<<endl;


/*
4. clear(): Erases all the contents of the string and assign an empty string
("") of length zero. Its time complexity is O(1).
*/

string str10="Erases all the contents of the string and assign an empty string";
cout<<str10<<endl;
str10.clear();
cout<<str10<<endl;//No Output, as string is empty.


/*5.compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.
*/

string str11="align";
string str12="string";
cout<<str12.compare(str11)<<endl;//output:1,basically a value greater than 0 denoting str12 is greater than str11.
cout<<str11.compare(str12)<<endl;//Output: -1, basically a value less than 0 denoting str11 is less than str12.
string str13="Compare";
string str14="Compare";
cout<<str13.compare(str14)<<endl;//Output: 0,as both string are equal.

//to check two strings are equal
string str15="basically";
string str16="Output";
// if(str15.compare(str16)==0)//if(str15.compare(str16)==false)
if(!str15.compare(str16))//or 
cout<<"strings are equal"<<endl;
else 
cout<<"strings are not equal"<<endl;



/*
6. empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. Its time complexity is O(1).
*/

string str17="empty";
cout<<str17<<endl;
str17.clear();
cout<<str17<<endl;//No Output, as string is empty.
if(str17.empty()==true)//if(str17.empty())
cout<<"string is empty"<<endl;
else 
cout<<"string is not empty"<<endl;



/*
7.erase(): Deletes a substring of the string. Its time complexity is
 O(N) where N is the size of the new string.*/
 string str18="Deletes";
 cout<<str18<<endl;
 str18.erase(0,2);//erase(index_number_from_where_you_want_to_delete_ , how_many_characters_you_want_to_delete)
 cout<<str18<<endl;


/*
8.find(): Searches the string and returns the first occurrence of the parameter in the string. Its time complexity is O(N) where N is the size of the string*/
string str19="Searches the string";
cout<<str19<<endl;
cout<<str19.find("string")<<endl;


/*
9.insert(): Inserts additional characters into the string at a particular position.
Its time complexity is O(N) where N is the size of the new string.*/
string str20="In";
cout<<str20<<endl;
str20.insert(2,"serts");
cout<<str20<<endl;



/*
10.length() or size(): Returns the length of the string. Its time complexity is O(1).
*/

string str21="Returns the length of the string";
cout<<str21<<endl;
// cout<<str21.length()<<endl;
cout<<str21.size()<<endl;

for(int i=0;i<str21.length();i++)
cout<<str21[i]<<" ";


/*11.substr(): Returns a string which is the copy of the substring. Its time
complexity is O(N) where N is the size of the substring. For example:*/
string str22="Returns a string which is the copy of the substring";
cout<<endl<<str22<<endl;
cout<<str22.length()<<endl;
cout<<str22.substr(42,51)<<endl;


/*12.stoi(): Returns the strings converted to int datatype
*/

string str23="555";
int s=stoi(str23);
cout<<s<<" and "<<s+5<<endl;

/*13.To convert an integer to a string, we use to_string() function. */
int d=852;
cout<<to_string(d)<<endl;
cout<<to_string(d)+"77"<<endl;//77 will append at the end of d


/*
14.Sorting a string:
 To sort a string, we need to include a header file known as
algorithm in our code like this.
Then we can use sort() function that is present in above header file on our string.
Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
end of the string.*/

string str24="qwertyuiopasdfghjklzxcvbnm";
cout<<str24<<endl;
sort(str24.begin(),str24.end());
cout<<str24<<endl;

string str25="9876543210";
cout<<str25<<endl;
sort(str25.begin(),str25.end());
cout<<str25<<endl;


/*15.resize(): Resize the string to the new length which can be less than or
greater than the current length. Its time complexity is O(N) where N is the
size of the new string.
*/
string str26="Resize this string";
cout<<str26<<" "<<str26.size()<<endl;
str26.resize(10);
cout<<str26<<" "<<str26.size()<<endl;



/*
16.begin(): Returns an iterator pointing to the first character. Its time
complexity is O(1).
*/

/*
17.. end(): Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1).
*/

    return 0;
}
