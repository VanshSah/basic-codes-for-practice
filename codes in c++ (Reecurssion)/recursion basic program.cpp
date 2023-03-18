#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int prevSum = sum(n-1);        // decreasing order
	return n + prevSum;              // means adding n to sum of n-1 
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
}