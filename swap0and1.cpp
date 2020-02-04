#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cout<<"enter any binary number";
	cin>>n;
	int a[100];
	while(n>0){
		
		if(n%2==0){
		a[i]=0;
		n=n/2;
		i++;}
		else if(n%2==1){
			a[i]=1;n=n/2;
			i++;
		}
		
	}
	//	int size=sizeof(a)/sizeof(a[0]);
	for(i=i-1;i>=0;i-- )
		cout<<a[i]<<endl;
}
