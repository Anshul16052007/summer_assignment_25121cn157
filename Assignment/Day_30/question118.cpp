#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

void display(Book b[], int n) {
    cout << "\nLibrary Books\n";
    cout << "----------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Book ID : " << b[i].id << endl;
        cout << "Title   : " << b[i].title << endl;
        cout << "Author  : " << b[i].author << endl;
        cout << "----------------------\n";
    }
}

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book b[100];

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID: ";
        cin >> b[i].id;
        cin.ignore();
        cout << "Title: ";
        getline(cin, b[i].title);
        cout << "Author: ";
        getline(cin, b[i].author);
    }

    display(b, n);

    return 0;
}