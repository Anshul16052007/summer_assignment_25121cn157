#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID : " << id;
        cout << "\nName        : " << name;
        cout << "\nSalary      : " << salary << endl;
    }
};

int main() {
    Employee emp[100];
    int n=0, choice;

    do {
        cout << "\n1.Add Employee\n2.Display Employees\n3.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            emp[n].input();
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++)
                emp[i].display();
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