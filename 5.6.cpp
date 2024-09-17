
#include<iostream>
using namespace std;
int main(){
	
	int size;
	int arr1[size];
	int arr2[size];
	int addArr[size];
	int mulArr[size];
	arr1[100];
	arr2[100];
	addArr[100];
	mulArr[100];
	cout<<"Enter the size of an array: ";
	cin>>size;
	cout<<"Enter the element of first Array: ";
	for(int i=0; i<size; i++){
		cin>>arr1[i];
	}
	cout<<"Enter the element of second Array: ";
	for(int j=0; j<size; j++){
		cin>>arr2[j];
	}
	
	cout<<"multiplcation of an array: ";
	for(int k=0; k<size; k++){
		mulArr[k]=arr1[k]*arr2[k];
	//	cout<<"multiplication of array: ";
		cout<<mulArr[k]<<" ";
	}
	cout<<endl;
	
	cout<<"addition of an array: ";
	for(int l=0; l<size; l++){
		addArr[l]=arr1[l]+arr2[l];
		//cout<<"addition of an aaray: ";
		cout<<addArr[l]<<" ";
	}
	cout<<endl;
	
}
