#include<iostream>
using namespace std;

int main(){
    int array[10]={2,5,6,8,-99,55,47,6,22,46};
    int max = array[0];
    int secondMax = INT_MIN; // Initialize secondMax to the smallest possible integer value

    for(int i=1; i<10; i++){
        if(array[i] > max){
            secondMax = max;
            max = array[i];
        } else if(array[i] > secondMax && array[i] != max){
            secondMax = array[i];
        }
    }

    cout<<"Second largest number in the array: "<<secondMax<<endl;

    return 0;
}
