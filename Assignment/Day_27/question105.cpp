#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll No : " << roll;
        cout << "\nName     : " << name;
        cout << "\nMarks    : " << marks << endl;
    }
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n1.Add Student\n2.Display Students\n3.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            s[n].input();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++) {
                s[i].display();
            }
            break;

        case 3:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while(choice!=3);

    return 0;
}