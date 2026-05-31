#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the range: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}