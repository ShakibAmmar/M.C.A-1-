#include <iostream>
#include <cstring>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};


struct DOB {
    char name[100]; 
    Date birthDate;  
};

int main() {
    DOB myDOB;

    
    strcpy(myDOB.name, "John Doe");
    myDOB.birthDate.day = 15;        
    myDOB.birthDate.month = 8;     
    myDOB.birthDate.year = 1995;     


    cout << "Name: " << myDOB.name << endl;
    cout << "Date of Birth: " << myDOB.birthDate.day << "/"
         << myDOB.birthDate.month << "/" << myDOB.birthDate.year << endl;

    return 0;
}

