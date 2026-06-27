#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, per;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5;

    cout << "\n----- MARKSHEET -----";
    cout << "\nRoll No : " << roll;
    cout << "\nName    : " << name;
    cout << "\nTotal   : " << total;
    cout << "\nPercentage : " << per << "%";

    if(per >= 90)
        cout << "\nGrade : A+";
    else if(per >= 75)
        cout << "\nGrade : A";
    else if(per >= 60)
        cout << "\nGrade : B";
    else if(per >= 40)
        cout << "\nGrade : C";
    else
        cout << "\nGrade : Fail";

    return 0;
}