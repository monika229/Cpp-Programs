//accept any digit and display its ASCII character.
#include<iostream>
using namespace std;
int main()
{
	int numeric;
	char c;
	cout << "Give a number to convert to ascii: ";
  cin >> numeric;
  cout << "These is the ASCII value of " << (char) numeric;
  return 0;

}
