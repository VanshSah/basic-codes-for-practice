#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	int prevFact = factorial(n-1);
	return n*prevFact;                // in place of above two line we only do [return n*factorial(n-1)
}
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
}