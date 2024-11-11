#include<iostream>
using namespace std;

float add(float n1,float n2){
    float sum = n1 + n2;
    return sum;
}
float subtract(float n1, float n2){
    int sub = n2 - n1;
    return sub;
}
float multiply(float n1 , float n2){
    float mul = n1 * n2;
    return mul;
}
float division(float n1 , float n2){
    float div = n2/n1;
return div;
}





int main(){
    float num1 , num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;

    cout<<"Select Option to perform which Arithmetic operation"<<endl;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;

    int input;
    cin>>input;

    switch(input){
        case 1: cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<add(num1,num2);
        break;
        case 2: cout<<"Subtraction of "<<num2<<" and "<<num1<<" is "<<subtract(num1,num2);
        break;
        case 3: cout<<"Multiplication of "<<num1<<"  and "<<num2<<" is "<<multiply(num1,num2);
        break;
        case 4: cout<<"Division of "<<num2<<" by "<<num1<<" is "<<division(num1,num2);
        break;
        default: cout<<"Input Valid Input";

    }
    return 0;

}