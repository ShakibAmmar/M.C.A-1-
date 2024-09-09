#include<iostream>

using namespace std;
int main(){
	int flag;
	int n;
	cout << "Enter the no. upto which prime no is required: ";
	cin >> n;
	if (n<2){
		cout<<"Invalid Entry"<<endl;
	}
	for (int i=2;i<n;i++){
		flag=0;
		for (int j=2;j<=i/2;j++){
			if (i%j==0){
				flag=1;
				break;
			}
		}
		if (flag==0){
			cout<<i<<endl;
		}
	}
	
	return 0;
}
