#include<iostream>
#include<climits>
using namespace std;
int Kadane(int a[], int n)
{
	int currentSum=0;
	int maxSum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentSum += a[i];
		if(currentSum<0)
		{
			currentSum=0;
		}
		maxSum = max(maxSum,currentSum);
	}
	return maxSum;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int wrapSum;
	int nonwrapSum;
	nonwrapSum = Kadane(a,n);                   // input = 7 then next line {4 -4 6 -6 10 -11 12} and output = 22
	int totalSum=0;
	for(int i=0;i<n;i++)
	{
		totalSum += a[i];
		a[i] = -a[i];
	}
	wrapSum = totalSum + Kadane(a,n);        // here [(+) comes from (-) (-) which means (+)]     and  [Kadane(a,n)] is sum of non-contributing elements
	cout<<max(wrapSum,nonwrapSum)<<endl;
	return 0;
}