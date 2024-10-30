#include<iostream>
using namespace std;

int greatest_common_divisor(int n1 , int n2){

	while(n2!=0){
		int temp = n2;
		n2 = n1 % n2;
		n1 = temp;
	}
	return n1;
}

int main(){
	
	int num1 , num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	
	cout<<"Greatest commom divisor of "<<num1<<" and "<<num2<<" is "<<greatest_common_divisor(num1,num2)<<endl;
	
	
}
