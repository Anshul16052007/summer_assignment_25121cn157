#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int accNo;
    string name;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    void display()
    {
        cout << "\nAccount Number : " << accNo;
        cout << "\nName : " << name;
        cout << "\nBalance : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.createAccount();
    b.display();

    b.deposit();
    b.display();

    b.withdraw();
    b.display();

    return 0;
}