#include <iostream>
#include <string>
using namespace std;

class Contact
{
    string name;
    string phone;

public:
    void addContact()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);
    }

    void updateContact()
    {
        cout << "Enter New Phone Number: ";
        getline(cin, phone);

        cout << "Contact Updated Successfully.\n";
    }

    void display()
    {
        cout << "\nName : " << name;
        cout << "\nPhone : " << phone << endl;
    }
};

int main()
{
    Contact c;

    c.addContact();
    c.display();

    c.updateContact();
    c.display();

    return 0;
}