#include<iostream>
#include<climits>
using namespace std;
int main()
{                                            // this used for solving time complexity that we saw in previous max subarray sum which was [o(N) cube] because three nested loop was used
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int currSum[n+1];    // here we store pre-fix if [i] which means on [ith] position we store sum from index[0] to index[i]
	currSum[0]=0;        //  this is for 0th sum
	for(int i=1;i<=n;i++)
	{
		currSum[i] = currSum[i-1] + a[i-1];    // here a[i-1] because our loop starts from [1 to n]	
	}
	int maxSum = INT_MIN;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
		for(int j=0;j<i;j++)       // here [j<i] means from (i-1) same apply for [i<n] means from (n-1)
		{
		sum = currSum[i] - currSum[j];
		maxSum = max(sum,maxSum);
	    }
	}
	cout<<maxSum;
return 0;                         // input = 5 then next line {1 -4 3 2 1} output = [6]
}