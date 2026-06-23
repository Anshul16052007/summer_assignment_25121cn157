#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) != seen.end()) {
            cout << "First repeating character: " << ch;
            return 0;
        }
        seen.insert(ch);
    }

    cout << "No repeating character found";
    return 0;
}