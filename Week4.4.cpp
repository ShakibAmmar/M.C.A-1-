#include<iostream>

using namespace std;
int main(){
	int t1,t2,i,k,nextterm;
	cout<<"Enter the total no. of terms(n): ";
	cin>>k;
	t1=0;
	t2=1;
	
	for(i=1;i<=k;i++){
		if(i==1){
			cout<<t1<<endl;
			continue;
		}
		if(i==2){
			cout<<t2<<endl;
			continue;
		}
		nextterm=t1+t2;
		cout<<nextterm<<endl;
		t1=t2;
		t2=nextterm;
	}
	return 0;
}
