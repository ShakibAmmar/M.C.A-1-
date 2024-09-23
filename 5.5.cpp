#include<iostream>
using namespace std;
int main(){
	 int size;
	 cout<<"Enter the size of array: ";
	 cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<endl;

	int start=0;
	int end=size-1;
	
	while(start<end)
	{	swap(arr[start],arr[end]);
	start++;
	end--;
	}



	for(int j=0; j<size; j++){
		cout<<"["<<arr[j]<<"]"<<" ";
	}




}
