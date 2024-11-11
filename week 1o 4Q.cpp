#include <iostream>
#include <cstring>
using namespace std;


union Address {
    char name[100];
    char home_address[200];
    char hostel_address[200];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    Address myAddress;

    #include <iostream>
#include <cstring>
using namespace std;

// Define a union with six strings
union Address {
    char name[100];
    char home_address[200];
    char hostel_address[200];
    char city[50];
    char state[50];
    char zip[20];
};

int main(){
    // Create a variable of type Address (union)
    Address myAddress;

    // Assigning values to the union members (at different times)
    strcpy(myAddress.home_address, "1234 Elm Street, Springfield");
    strcpy(myAddress.city, "Springfield");
    strcpy(myAddress.state, "Illinois");
    strcpy(myAddress.zip, "62704");

    // Displaying the address information
    cout << "Present Address: " << endl;
    cout << "Home Address: " << myAddress.home_address << endl;
    cout << "City: " << myAddress.city << endl;
    cout << "State: " << myAddress.state << endl;
    cout << "ZIP Code: " << myAddress.zip << endl;

    return 0;
}

