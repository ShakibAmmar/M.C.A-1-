#include<iostream>
using namespace std;
void swapValue(int num1,int num2){
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"after swapValue: num1= "<<num1<<", num2= "<<num2<<endl;
}
void swapReference(int &num1,int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"after swapReference: num1= "<<num1<<", num2= "<<num2<<endl;
}
int main(){
	int num1,num2;
	cout<<"enter two numbers: ";
	cin>>num1>>num2;
	cout<<"before swapValue: num1= "<<num1<<", num 2= "<<num2<<endl;
	//swapValue(num1,num2);
	
	
	cout<<"Enter 1 for callbyvalue"<<endl;
	cout<<"Enter 2 for callbyreference"<<endl;
	int choice;
	cout<<"Enter choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1: 
		swapValue(num1,num2);
		break;
		case 2: 
		swapReference(num1,num2);
		break;
	}
	
	return 0;	
	}
