#include<iostream>
using namespace std;

int sum(int num){
    if(num==0)
    {
        return 0;
    }
    else{
        int res = num + sum(num-1);
        return res;
    }
}


int main(){
    int num ;
    cout<<"Enter number:";
    cin>>num;

    cout<<"Sum= "<<sum;
    return 0;
}
