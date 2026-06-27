#include <iostream>
using namespace std;

class Salary {
public:
    int id;
    string name;
    float basic, hra, da, total;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;

        hra = basic * 0.20;
        da = basic * 0.10;
        total = basic + hra + da;
    }

    void display() {
        cout << "\nEmployee ID : " << id;
        cout << "\nName        : " << name;
        cout << "\nBasic       : " << basic;
        cout << "\nHRA         : " << hra;
        cout << "\nDA          : " << da;
        cout << "\nTotal Salary: " << total << endl;
    }
};

int main() {
    Salary s;
    s.input();
    s.display();

    return 0;
}