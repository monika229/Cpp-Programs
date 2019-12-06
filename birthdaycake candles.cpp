#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,max,c=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
cin>>a[i];
    }
    sort(a,a+n);
max=a[n-1];
 for(i=0;i<n-1;i++){
if(max==a[i])
c++;
    }
    cout<<c;
}

