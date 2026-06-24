#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence, word, longestWord;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest Word: " << longestWord;

    return 0;
}