#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)                   // increasing
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)                           // [ 2 * i(row) - 1 ]   for required space
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	
	for(int i=n;i>=1;i--)                               // decreasing
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)                           // [ 2 * i(row) - 1 ]   for required space
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	
	
}
