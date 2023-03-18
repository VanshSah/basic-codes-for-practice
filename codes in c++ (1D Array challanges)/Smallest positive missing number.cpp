#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	const int N = 1e6+2;           // this is a variable
	bool check[N];                 // this is check of above variable named as bool
	for(int i=0;i<N;i++)
	{
		check[i]=false;          // chcek array initialized to false     also in place of false we can use 0 and for true we use 1
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)       // means a[i] is non--negative
		{
			check[a[i]] = 1;    // here we can use true instead of 1
		}
	}
	int ans = -1;         // declaring answer variable
	for(int i=1;i<N;i++)       // i=1 because no use of [0]
	{
		if(check[i]==false)     // Also , [0] instead of false
		{
			ans=i;
			break;
		}
	}                                       // input = 6 then next line (0 -9 1 3 -4 5) and [output = 2]
	cout<<ans<<endl;
	return 0;
}