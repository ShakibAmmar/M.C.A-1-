#include<iostream>

using namespace std;
int main(){
	int x;
	cout << "Enter the characater: ";
	cin >> x;
	if (x>=65 && x<=90){
		cout<<"Entered Character is Capital Letter "<<endl;
	}
	else if (x>=97 && x<=122){
		cout<<"Entered Character is small Letter "<<endl;
	}
	else if (x>=48 && x<=57){
		cout<<"Entered Character is digit "<<endl;
	}
	else if ((x>=0 && x<=47)||(x>=58 && x<=64)||(x>=91 && x<96) || (x>=123 && x<127) ){
		cout<<"Entered Character is Special Character "<<endl;
	}
	return 0;
}
