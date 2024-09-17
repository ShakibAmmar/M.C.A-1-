#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"Enter the size of an Array: ";
	cin>>size;
	int arr[size];
	arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	
	}
	cout<<endl;
	for(int j=0; j<size; j++){
	
		if(arr[j]>0){
			cout<<arr[j]<<" "<<"postive number in an array."<<endl;
		}else if(arr[j]<0){
			cout<<arr[j]<<" "<<"Negative number in an array."<<endl;
	}
}
	for(int k=0;k<size;k++){
	
		if(arr[k]%2==0){
			cout<<arr[k]<<" "<<"Even number."<<endl;
		}else{
			cout<<arr[k]<<" "<<"Odd number."<<endl;
		}
}
}
