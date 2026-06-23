#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_map<char, int> freq;

    for (char ch : str)
        freq[ch]++;

    char maxChar;
    int maxFreq = 0;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxChar = it.first;
        }
    }

    cout << "Maximum occurring character: "
         << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}