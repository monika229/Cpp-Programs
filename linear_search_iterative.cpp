#include<iostream>
using namespace std;
void linear_search(int a[],int n,int key){int c=0;
	for(int i=0;i<n;i++){
		
		if(a[i]==key){
	 c++;
		cout<<"element found at position"<<i+1;
		break;}
	}
	if(c==0)
	cout<<"element not found";
}
int main(){
	int n,key;
	cout<<"size of array";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"searching number";
	cin>>key;
	linear_search(a,n,key);
}
