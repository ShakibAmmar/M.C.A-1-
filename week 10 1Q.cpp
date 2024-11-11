#include <iostream>
using namespace std;


class Complex {
private:
    double real, imag;

public:
   
    Complex() : real(0), imag(0) {}

    
    Complex(double r, double i) : real(r), imag(i) {}

    
    void read() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

  r
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

 
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};


int main() {
    Complex num1, num2, result;

 
    cout << "Enter first complex number:" << endl;
    num1.read();
    cout << "Enter second complex number:" << endl;
    num2.read();

    cout << "\nFirst complex number: ";
    num1.display();
    cout << "Second complex number: ";
    num2.display();

    result = num1.add(num2); 
    cout << "\nSum: ";
    result.display();


    result = num1.subtract(num2);
    cout << "Difference: ";
    result.display();

    return 0;
}

