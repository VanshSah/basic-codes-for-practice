#include<bits/stdc++.h>
using namespace std;
int maxSumSubarray(int a[], int n)
{
	int maxSum = 0;                              // [int maxSum = INT_MIN;]---> we use this if all values in array are negative
	int currSum = 0;
	for(int i=0;i<n;i++)
	{
		currSum += a[i];
		if(currSum > maxSum)
		{
			maxSum = currSum;
		}
		if(currSum<0)
		{
			currSum = 0;
		}
	}
	                                            // we use some extra code :-
	                                           // if(maxSum == INT_MIN)
	                                           //{for(int i=0,i<n;i++){maxSum = max(maxSum,a[i]);}}
	return maxSum;
}
int main()
{
	int a[] = {5,-4,-2,6,-1};
	int n = sizeof(a) / sizeof(a[0]);
	cout<<maxSumSubarray(a,n);
}