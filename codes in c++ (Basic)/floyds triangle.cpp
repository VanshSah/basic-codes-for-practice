#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++)            // increasing order
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count<<" ";                     //    increase the value upto user input
			count++;
		}
		cout<<endl;
	}
	return 0;
}
