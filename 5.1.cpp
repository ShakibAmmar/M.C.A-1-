#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int num[10];
	
	for(int i=0; i<size; i++){
		
		cin>>num[i];
	}
	
	for(int i=0; i<size; i++){
		
		cout<<num[i]<<" ";
	}
	
}
