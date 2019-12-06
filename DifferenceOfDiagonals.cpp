#include <iostream>
using namespace std;
int main(){
    int n,m,lsum,rsum;
    cin>>n;
    int a[n][n],i,j;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
cin>>a[i][j];
    }
    }
for(i=0;i<n;i++){
        lsum+=a[i][i];
         rsum+= a[(n-1)-i][i];
    }
    rsum--;
     int result=(lsum-rsum);
     if(result<0)
     result=-(result);
     cout<<result;
}

