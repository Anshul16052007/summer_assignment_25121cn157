#include <iostream>
#include <string>
using namespace std;

class Ticket
{
    string passengerName;
    int ticketNo;
    bool booked;

public:
    void bookTicket()
    {
        cout << "Enter Passenger Name: ";
        cin.ignore();
        getline(cin, passengerName);

        cout << "Enter Ticket Number: ";
        cin >> ticketNo;

        booked = true;
        cout << "Ticket Booked Successfully.\n";
    }

    void cancelTicket()
    {
        if (booked)
        {
            booked = false;
            cout << "Ticket Cancelled Successfully.\n";
        }
        else
        {
            cout << "No Ticket Booked.\n";
        }
    }

    void display()
    {
        cout << "\nPassenger : " << passengerName;
        cout << "\nTicket No : " << ticketNo;
        cout << "\nStatus : " << (booked ? "Booked" : "Cancelled") << endl;
    }
};

int main()
{
    Ticket t;

    t.bookTicket();
    t.display();

    t.cancelTicket();
    t.display();

    return 0;
}