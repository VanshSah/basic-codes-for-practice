#include<bits/stdc++.h>
using namespace std;
int maxProfit(int price[], int n)
{
	int maxProfit = 0;
	int minPrice = INT_MAX;          // INT_MAX denotes minimum
	for(int i=0;i<n;i++)
	{
		minPrice = min(minPrice,price[i]);
		maxProfit = max(maxProfit,price[i]-minPrice);
	}
	return maxProfit;
}
int main()
{
	int price[] = {5,2,6,1,4};
	int n = sizeof(price)/sizeof(price[0]);
	cout<<maxProfit(price,n);
}