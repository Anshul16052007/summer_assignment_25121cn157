#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

void display(Employee e[], int n) {
    cout << "\nEmployee Records\n";
    cout << "-------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "ID     : " << e[i].id << endl;
        cout << "Name   : " << e[i].name << endl;
        cout << "Salary : " << e[i].salary << endl;
        cout << "-------------------------\n";
    }
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";
        cin >> e[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, e[i].name);
        cout << "Salary: ";
        cin >> e[i].salary;
    }

    display(e, n);

    return 0;
}