#include<iostream>
using namespace std;
int main(){
    int a1[5]={3,6,12,45,56};
    int a2[5]={1,4,9,22,48};
    int a3[10];
    for(int i=0;i<5;i++){
        a3[i]=a1[i];
    }
    for(int i=5;i<10;i++){
        a3[i]=a2[i-5];
    }
    cout<<"merged array\n";
    for(int i=0;i<10;i++){
        cout<<a3[i]<<"\t";
    }
    for(int i=0;i<9;i++){
        int smallest=i;
        for(int j=i+1;j<10;j++){
            if(a3[j]<a3[smallest]){
                smallest=j;
            }
        }
        if(smallest!=i){
            int temp=a3[i];
            a3[i]=a3[smallest];
            a3[smallest]=temp;
        }
    }
    cout<<"\nsorted array\n";
    for(int i=0;i<10;i++){
        cout<<a3[i]<<"\t";
    }
    return 0;
}
