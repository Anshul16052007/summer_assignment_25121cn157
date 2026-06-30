#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[30];
    int quantity;
    float price;
};

int main() {
    Item items[100];
    int count = 0, choice;

    do {
        cout << "\n===== Inventory Management =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Item ID: ";
            cin >> items[count].id;

            cout << "Enter Item Name: ";
            cin >> items[count].name;

            cout << "Enter Quantity: ";
            cin >> items[count].quantity;

            cout << "Enter Price: ";
            cin >> items[count].price;

            count++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No items available.\n";
            } else {
                cout << "\nID\tName\tQty\tPrice\n";
                for (int i = 0; i < count; i++) {
                    cout << items[i].id << "\t"
                         << items[i].name << "\t"
                         << items[i].quantity << "\t"
                         << items[i].price << endl;
                }
            }
            break;

        case 3: {
            int id, found = 0;
            cout << "Enter Item ID to search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (items[i].id == id) {
                    cout << "\nItem Found\n";
                    cout << "ID: " << items[i].id << endl;
                    cout << "Name: " << items[i].name << endl;
                    cout << "Quantity: " << items[i].quantity << endl;
                    cout << "Price: " << items[i].price << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";

            break;
        }

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}