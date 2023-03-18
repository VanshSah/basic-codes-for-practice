#include<iostream>
using namespace std;
int main()
{
	int n, reverse_num, remainder;
	cout<<"enter the numbers = ";
	cin>>n;
	while(n!=0)
	{
		remainder = n%10;
		reverse_num = reverse_num*10 + remainder;
		n /= 10;
	}
	cout<<"reversed numbers are = "<<reverse_num;
	return 0;
}
