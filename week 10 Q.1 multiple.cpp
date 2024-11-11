#include <iostream>
using namespace std;
struct Complex {
    float real;
    float imag;
};

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

void displayComplex(Complex c) {
    if (c.imag < 0) {
        cout << c.real << " - " << -c.imag << "i" << endl;
    } else {
        cout << c.real << " + " << c.imag << "i" << endl;
    }
}

int main() {
    Complex c1, c2, result;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> c1.real >> c1.imag;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> c2.real >> c2.imag;


    result = multiplyComplex(c1, c2);

    cout << "The product of the two complex numbers is: ";
    displayComplex(result);

    return 0;
}

