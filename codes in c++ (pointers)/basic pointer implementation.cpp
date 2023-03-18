#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int* ptr = &a;
	cout<<*ptr<<endl;   // for output of value
	cout<<ptr<<endl;    // for output of address
	*ptr = 100;         // for updating value from 10 to 100
	cout<<a<<endl;     
	return 0;
}