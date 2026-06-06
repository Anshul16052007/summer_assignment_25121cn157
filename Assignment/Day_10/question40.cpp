#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Ascending characters
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }

        // Descending characters
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}