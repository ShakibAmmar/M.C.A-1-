#include<iostream>
using namespace std;
int main(){
	
	
	int sum=0;
	
	
	int array[10]={2,5,6,8,99,55,47,6,22,46};
	
	for(int i=0; i<10; i++){
		cout<<array[i]<<" , ";
		
	}
	cout<<endl;
	
	for(int i=0; i<10; i++){
		sum=sum+array[i];
	}
	
	
	
	cout<<"Sum of Array: "<<sum;
	return 0;
}
