#include<iostream>
using namespace std;
int fact(int n)
{
	int factorial = 1;
	for(int i=2;i<=n;i++)
	{
		factorial *= i;                       //  factorial of 5 = [5*4*3*2*1]
	}
	return factorial;
}
int main()
{
	int n;
	cin>>n;
	int ans = fact(n);
	cout<<"ans = "<<ans<<endl;
	return 0;
}
