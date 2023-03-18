#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int m1[n1][n2];
	int m2[n2][n3];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		cin>>m1[i][j];
	}
	
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n3;j++)
		cin>>m2[i][j];              // single statement in for loop, this we can write without brackets
	}
	int ans[n1][n3];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		ans[i][j]=0;
	}
	for(int i=0;i<n1;i++)          // main code
	{
		for(int j=0;j<n3;j++)
		{
			for(int k=0;k<n2;k++)
			{
				ans[i][j] += m1[i][k]*m2[k][j];  // k denoting coloumns
			}
		}
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n3;j++)
		{
			cout<<ans[i][j]<<" ";
		//	cout<<endl;  wrong because if we dont use brackets then it is right because then it seeem as out of the loop but we have use used here brackets so we have to write it out of the loop
		}
		cout<<endl;
		return 0;
	}
	}