#include <iostream>
using namespace std;

int main() {
    int num, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;   // Get last digit
        product = product * digit;
        num = num / 10;         // Remove last digit
    }

    cout << "Product of digits = " << product;

    return 0;
}