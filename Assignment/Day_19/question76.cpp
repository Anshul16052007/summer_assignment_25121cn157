#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i][i];           // Primary diagonal
        sum += a[i][n - 1 - i];   // Secondary diagonal
    }

    // Avoid counting the center element twice for odd n
    if (n % 2 == 1) {
        sum -= a[n / 2][n / 2];
    }

    cout << sum;

    return 0;
}