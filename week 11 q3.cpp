#include<iostream>
using namespace std;
int Reverse(int num1){

    int digit=0;
    int rev=0;

 while(num1 != 0){
    digit = num1%10;
    rev = rev * 10 + digit;
    num1= num1/10;

    }
    return rev;
}

int SumwithReverse(int num1,int num2){
   int sum = num1 + num2;
    return sum;
}

int SumwithAlternate(int num) {
    int sum_even = 0; 
    int sum_odd = 0; 
    int position = 0; 

    while (num != 0) {
        int digit = num % 10; 
        if (position % 2 == 0) { 
            sum_even += digit;
        } else { 
            sum_odd += digit;
        }
        num = num / 10;
        position++; 
    }
    
    return sum_even + sum_odd; 
}

int main(){
    int num;
    cout<<"Enter 4 digit Number: ";
    cin>>num;

    int reverse = Reverse(num);
    SumwithReverse(num, reverse);
    
  int input;
   cout<<"Enter 1 for Reverse of digit"<<endl;
   cout<<"Enter 2 for Sum of Number with Reverse"<<endl;
   cout<<"Enter 3 for Sum of alternative digit"<<endl;
    cout<<"Enter value to Operate Operation: "<<endl;
    cin>>input;

    switch(input){
        case 1:cout<<"Reverse of the "<<num<<" is "<<Reverse(num)<<endl;
        break;
        case 2 :cout<<"Sum with Reverse is "<< SumwithReverse(num,reverse)<<endl;
        break;
        case 3:cout<<"Sum with Alternate digit is "<<SumwithAlternate(num)<<endl;
        break;
         
    
    
    }
}
