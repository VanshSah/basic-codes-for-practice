#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)                       //     180 angular pyramid
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
