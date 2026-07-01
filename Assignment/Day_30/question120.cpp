#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

Student s[100];
int n = 0;

void addStudent() {
    cout << "\nEnter Roll: ";
    cin >> s[n].roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[n].name);

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;
}

void displayStudents() {
    if (n == 0) {
        cout << "\nNo records found.\n";
        return;
    }

    cout << "\nStudent Records\n";
    cout << "---------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll  : " << s[i].roll << endl;
        cout << "Name  : " << s[i].name << endl;
        cout << "Marks : " << s[i].marks << endl;
        cout << "---------------------------------\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            cout << "\nRecord Found\n";
            cout << "Roll : " << s[i].roll << endl;
            cout << "Name : " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "Record Not Found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}