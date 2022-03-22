#include <iostream>
#include <cstring>
using namespace std;

struct BOOKS
{
    char title[30];
    char author[30];
    char subject[30];
    int book_id;
    float book_price;
};

int main()
{
    /*
    some important points about structure

    • Structure is collection of dissimilar elements
    • Structure is a way to group variables
    • Structure is used to create data type
    • Defining the structure means creating new data type

    C/C++ arrays allow you to define variables that combine several data items of
    the same kind, but structure is another user defined data type which allows you
    to combine data items of different kinds.
    Structures are used to represent a record, suppose you want to keep track of
    your books in a library. You might want to track the following attributes about
    each book:
    - Title
    - Author
    - Subject
    - Book ID

    Defining a Structure:
    To define a structure, you must use the struct statement. The struct statement
    defines a new data type, with more than one member, for your program. The
    format of the struct statement is this:

    struct [structure name]
    {
     member definition;
     member definition;
     ...
     member definition;
    } [one or more structure variables];

    The structure name is optional and each member definition is a normal variable
    definition, such as int i; or float f; or any other valid variable definition. At the
    end of the structure's definition, before the final semicolon, you can specify one
    or more structure variables but it is optional. Here is the way you would declare
    the Book structure:
*/
    // struct Books
    // {
    //     char title[50];
    //     char author[50];
    //     char subject[100];
    //     int book_id;
    // } book1,book2;// declaring structure variables but it is optional here

    // book 1 specification
    // struct BOOKS book1; // Declare Book1 of type BOOKS and  we can initialise here also a struct variable
    // book1 = {"Learn C++ Programming", "Jhon Snow", "C++ Programming", 215035, 523.35};

    // what if we want to take input from the user
    struct BOOKS book1;
    cout << "Input the book title,book author,book subject,book ID and book price: ";
    cin >> book1.title >> book1.author >> book1.subject >> book1.book_id >> book1.book_price;

    /*
Accessing Structure Members:
To access any member of a structure, we use the member access operator
(.). The member access operator is coded as a period between the structure
variable name and the structure member that we wish to access. You would
use struct keyword to define variables of structure type. Following is the
example to explain usage of structure:
*/

    // book 1 specification
    // strcpy(book1.title, "Learn C++ Programming");
    // strcpy(book1.author, "Jhon Snow");
    // strcpy(book1.subject, "C++ Programming");
    // book1.book_id = 215035;
    // book1.book_price = 523.35;

    // book 2 specification
    struct BOOKS book2; // Declare Book2 of type BOOKS
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Yakit Singha");
    strcpy(book2.subject, "Telecom");
    book2.book_id = 6700;
    book2.book_price = 665.95;

    //
    struct BOOKS book3; // Declare Book3 of type BOOKS

    // if we want to copy the book3 members from book1,do this
    book3 = book1; // copied book3 from book1

    // Print Book1 info
    cout << "Book 1 title : " << book1.title << endl;
    cout << "Book 1 author : " << book1.author << endl;
    cout << "Book 1 subject : " << book1.subject << endl;
    cout << "Book 1 id : " << book1.book_id << endl;
    cout << "Book 1 price : " << book1.book_price << endl
         << endl;

    // Print Book2 info
    cout << "Book 2 title : " << book2.title << endl;
    cout << "Book 2 author : " << book2.author << endl;
    cout << "Book 2 subject : " << book2.subject << endl;
    cout << "Book 2 id : " << book2.book_id << endl;
    cout << "Book 2 price : " << book2.book_price << endl
         << endl;

    // Print Book3 info
    cout << "Book 3 title : " << book3.title << endl;
    cout << "Book 3 author : " << book3.author << endl;
    cout << "Book 3 subject : " << book3.subject << endl;
    cout << "Book 3 id : " << book3.book_id << endl;
    cout << "Book 3 price : " << book3.book_price << endl
         << endl;

    return 0;
}