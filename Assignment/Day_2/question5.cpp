#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        sum += num % 10; // Get last digit
        num = num / 10;  // Remove last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
