#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, digits = 0;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate Armstrong sum
    while (temp != 0) {
        digit = temp % 10;
        sum += (long long)pow(digit, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}