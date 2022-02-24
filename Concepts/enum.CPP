#include<iostream>
using namespace std;

main()
{
    /*
    Enumerated Types:
An enumerated type declares an optional type name and a set of zero or more 
identifiers that can be used as values of the type. Each enumerator is a constant 
whose type is the enumeration.
Creating an enumeration requires the use of the keyword enum. The general 
form of an enumeration type is:

enum enum_name { list of names } var-list;

Here, the enum_name is the enumeration's type name. The list of names is 
comma separated,no semi-colon at the end of list.
For example, the following code defines an enumeration of colors called colors 
and the variable c of type color. Finally, c is assigned the value "blue".
*/

enum colors {red,green,blue,black,voilet,purple,indigo,maroon,pink} c;
c=blue;

/*
By default, the value of the first name is 0, the second name has the value 1, 
and the third has the value 2, and so on. But you can give a name, a specific 
value by adding an initializer. For example, in the following 
enumeration, green will have the value 5.
*/

// enum colors {red,green=5,blue};

// Here, blue will have a value of 6 because each name will be one greater than 
// the one that precedes it.



/*
Enumerated types work when you know in advance a finite (usually short) list of values that a
data type can take on. Here’s an example program, DAYENUM, that uses an enumeration for the
days of the week:
*/
enum daysOfweek { Sun, Mon, Tue, Wed, Thu, Fri, Sat} d3;//decalre a varible of type daysOfWeek
daysOfweek d1,d2;//define variables of type daysOfWeek
d1=Mon; //give values to 
d2=Thu;//variables



int  diff=d2-d1;
cout<< "Differencn between day 1 and d2 = " << diff << endl;
if(d1 < d2) //can do comparisons
cout << "day 1 comes before day 2"<<endl;
}