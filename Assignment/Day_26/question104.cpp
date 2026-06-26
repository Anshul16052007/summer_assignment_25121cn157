#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== QUIZ APPLICATION =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cin >> answer;
    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cin >> answer;
    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\nYour Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}