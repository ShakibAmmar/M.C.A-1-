#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int num,u_d,t_d,h_d;
	cout <<"Enter a 3 digit number: ";
	cin>>num;
	u_d=num%10;
	t_d=(num%100)/10;
	h_d=(num/100);
	if (pow(u_d,3)+pow(t_d,3)+pow(h_d,3)==num){
		cout<<"The enterd digit is Armstrong Number";
	}
	else{
		cout<<"The Entered digit is not Armstrong Number";
	}
	
	return 0;
}
