#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],suml=0,sumr=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int mid=n/2;
	    for(int i=0;i<mid;i++)
	        suml+=a[i];
	    for(int i=mid;i<n;i++)
	        sumr+=a[i];
	    cout<<suml*sumr<<endl;
	}
	return 0;
}
