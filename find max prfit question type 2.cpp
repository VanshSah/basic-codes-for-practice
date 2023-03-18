#include<bits/stdc++.h>
using namespace std;
int maxProfit(int a[], int n)
{
	int profit = 0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			profit += (a[i]-a[i-1]);
		}
	}
	return profit;
}
int main()
{
	int a[] = {5,2,6,1,4,7,3,6};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxProfit(a,n);
}