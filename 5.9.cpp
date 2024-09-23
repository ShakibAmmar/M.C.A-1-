#include<iostream>
using namespace std;
int main(){
	
	int size;
	cout<<"Enter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Array: ";
		for(int i=0; i<size; i++){
		cout<<"["<<arr[i]<<"]";
	}
	
	cout<<endl;
	int freq=0;
	int key;
	cout<<"Enter the Number Whose frequency you need to find: ";
	cin>>key;
	
	for(int k=0; k<size; k++){
		
		if(key==arr[k]){
			freq++;
		}
		
		
	}
	cout<<"Frequency of a number in Array is "<<freq;
	
	
}
