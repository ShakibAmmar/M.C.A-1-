#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    // Constructor to initialize the flight details
    Flight(int f_no, string src, string dest, double f) {
        this->flight_no = f_no;
        this->source = src;
        this->destination = dest;
        this->fare = f;
    }

    // Member function to display flight information using this pointer
    void displayInfo() const {
        cout << "Flight Information:" << endl;
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
        cout << endl;
    }
};

int main() {
    // Create a flight object
    int flight_no;
    string source, destination;
    double fare;

    // Get flight details from the user
    cout << "Enter flight number: ";
    cin >> flight_no;
    cin.ignore(); // Ignore newline character left in the buffer

    cout << "Enter source: ";
    getline(cin, source);

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter fare: ";
    cin >> fare;

    // Create Flight object with user input
    Flight flight(flight_no, source, destination, fare);

    // Display flight information
    flight.displayInfo();

    return 0;
}
