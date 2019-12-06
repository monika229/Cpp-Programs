#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int n,k,sum;
	cin>>n>>k;
	int a[n];
	        for(int i=1;i<=n;i++){
	            cin>>a[i];
	        }
	       for(int i=n-1;i<=n-k;i--){
	          sum=sum+a[i];
	       } 
	       cout<<sum;
	
}

