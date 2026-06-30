#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    do {
        cout << "\n===== String Operations =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "String: " << str << endl;
            break;

        case 2:
            cout << "Length = " << str.length() << endl;
            break;

        case 3: {
            string rev = str;
            reverse(rev.begin(), rev.end());
            cout << "Reversed String: " << rev << endl;
            break;
        }

        case 4: {
            string upper = str;
            for (char &c : upper)
                c = toupper(c);
            cout << "Uppercase: " << upper << endl;
            break;
        }

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}