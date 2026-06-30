#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n===== Array Operations =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2: {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum << endl;
            break;
        }

        case 3: {
            int max = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > max)
                    max = arr[i];
            cout << "Maximum = " << max << endl;
            break;
        }

        case 4: {
            int key, found = 0;
            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Found at position " << i + 1 << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Element not found.\n";
            break;
        }

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}