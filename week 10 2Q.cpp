#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_EMPLOYEES = 3;
    string names[NUM_EMPLOYEES];
    double basicPay[NUM_EMPLOYEES];
    double grossSalary[NUM_EMPLOYEES];
    const double DA_PERCENTAGE = 52.0 / 100.0;

    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        getline(cin, names[i]);  
        cout << "Enter basic pay for " << names[i] << ": ";
        cin >> basicPay[i];  
        cin.ignore(); 


        double DA = DA_PERCENTAGE * basicPay[i];
        grossSalary[i] = basicPay[i] + DA;
    }

     
    cout << "\nEmployee Name and Gross Salary:\n";
    cout << "--------------------------------------\n";
    
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << names[i] << ": " << grossSalary[i] << endl;
    }

    return 0;
}

