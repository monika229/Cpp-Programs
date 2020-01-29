//change temperature from farenheit to celcius
#include<iostream>
using namespace std;
int main()
{
	int c,f;
	cout<<"enter temperature in  farenhit"<<endl;
	cin>>f;
	c=(f-32)*5/9;
	cout<<"temp in celcius="<<c<<endl;
}

