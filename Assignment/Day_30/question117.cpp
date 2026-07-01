#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

void display(Student s[], int n) {
    cout << "\nStudent Records\n";
    cout << "-------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll : " << s[i].roll << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
        cout << "-------------------------\n";
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll: ";
        cin >> s[i].roll;
        cin.ignore();
        cout << "Name: ";
        getline(cin, s[i].name);
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    display(s, n);

    return 0;
}