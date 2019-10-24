#include<iostream>
using namespace std;
    int main(){
       // Scanner in = new Scanner(System.in);
        int t,a,b,n;
        cout<<"enter t";
        cin>>t;
        for(int i=0;i<t;i++){
        	cout<<"enter a, b,n";
            cin>>a;
            cin>>b;
            cin>>n;
        }
        
    int v;
    int s,sum=0;
    for(int k=0;k<n;k++){
	
                
                sum=sum+(2^k);
                s=a+b*sum;
            
       if(k!=n-1){
	                        
        cout<<s<<" ";   
	}
        else{
            cout<<s;
        }
    cout<<'\n';
}
    v=0;
    }


