#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cin>>a[i][j];
	    }
	}
	cout<<" array is\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	int x;
	cin>>x;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==x)
			{
				cout<<i<<" "<<j<<"\n";
				flag=true;
			}
		}
	}
	if(flag)
	{
		cout<<"element is found";
	}
	else
	{
		cout<<"element not found";
	}
	return 0;
}