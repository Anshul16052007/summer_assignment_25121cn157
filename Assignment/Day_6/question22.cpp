#include <iostream>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}