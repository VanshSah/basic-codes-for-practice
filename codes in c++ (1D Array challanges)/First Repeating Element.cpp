#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
//	const int N = 1e6+2; [not capable of (1e6) to compile (time complexity not handle)    // (1e6) means [10 to the power 6]  ------>>  this is to make constant, thats why we have declared here
    const int N = 1e2+2;  // this can solve time complexity error [1e2 changes from 1e6 , this means (time complexity solve better in) --->> 1e2 when (1e2 >> 1e6)]
	int idx[N];               // idx[N] is index array
	for(int i=0;i<N;i++)
	{
		idx[i] = -1;
	}
	int minidx = INT_MAX;          // minidx is another index that we needed
	for(int i=0;i<n;i++)          // condition 1st starts
	{
		if(idx[arr[i]] != -1)
		{
			minidx = min(minidx, idx[arr[i]]);     // {updating} --->>   because if we reach to any a[i] and that a[i] isnt (-1), so that should update to (-1)
		}
		else 
		{
			idx[arr[i]] = i;
		}
	}
	if(minidx == INT_MAX)
	{
		cout<<"-1"<<endl;       // updating (-1)
	}
	else
	{
		cout<<minidx+1<<endl;
	}
}