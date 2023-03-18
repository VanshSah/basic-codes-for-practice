#include<bits/stdc++.h>
using namespace std;
int maxSum(int a[], int n, int k)
{
	int max_Sum = INT_MIN;
	for(int i=0;i<n-k+1;i++)
	{
		int currSum = 0;
		for(int j=0;j<k;j++)
		{
			currSum += a[i+j];
		}
		max_Sum = max(currSum, max_Sum);                      // Update result if required
	}
	return max_Sum;
}

int main()
{
	int a[] = {1,4,2,10,2,3,1,0,20};
	int k = 4;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxSum(a,n,k);
}