#include <iostream>
#include <string>
using namespace std;

class pntr_obj {
private:
    int roll_no;
    string name;

public:
    // Member function to set data
    void set_data(int r, string n) {
        roll_no = r;
        name = n;
    }

    // Member function to print data and identify the calling object
    void print() {
        cout << "Object at memory address " << this << " has invoked print()." << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }
};

int main() {
    // Creating three objects of the class pntr_obj
    pntr_obj obj1, obj2, obj3;

    // Setting data for each object
    obj1.set_data(1, "Alice");
    obj2.set_data(2, "Bob");
    obj3.set_data(3, "Charlie");

    // Calling print() function for each object
    obj1.print();
    obj2.print();
    obj3.print();

    return 0;
}
