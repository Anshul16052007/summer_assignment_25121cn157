#include <iostream>
#include <string>
using namespace std;

class Library
{
    int bookId;
    string bookName;
    bool issued;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, bookName);
        issued = false;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book Issued Successfully.\n";
        }
        else
        {
            cout << "Book Already Issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book Returned Successfully.\n";
        }
        else
        {
            cout << "Book is Already Available.\n";
        }
    }

    void display()
    {
        cout << "\nBook ID : " << bookId;
        cout << "\nBook Name : " << bookName;
        cout << "\nStatus : " << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    Library b;

    b.addBook();
    b.display();

    b.issueBook();
    b.display();

    b.returnBook();
    b.display();

    return 0;
}