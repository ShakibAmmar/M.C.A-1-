#include <iostream>
using namespace std; 

class Number {
private:
    int num1;
    int num2;

public:
    Number(int a, int b) : num1(a), num2(b) {}

    int* greatest() {
        if (num1 > num2) {
            return &num1;
        } else {
            return &num2;
        }
    }
};

int main() {
    Number num(10, 20);
    int* greatestPtr = num.greatest();

    cout << "The greatest number is: " << *greatestPtr << std::endl;

    return 0;
}
