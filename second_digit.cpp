//accept three digt number and display the middle digit(for n numbers).
#include<iostream>
using namespace std;
int main()
{
	int n,m=0,s;
	cout<<"three digit number"<<endl;
	cin>>n;
	while(n>10)
	{
	m=n%10;
	n=n/10;
    }
	cout<<"second digit is="<<m<<endl;
}
