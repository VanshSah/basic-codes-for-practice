#include<bits/stdc++.h>
using namespace std;
void findSubArray(int a[], int n, int sum)
{
	int curSum = a[0];
	int start = 0;
	for(int i=1;i<=n;i++)
	{
		while(curSum > sum && start < i-1)
		{
			curSum -= a[start];
			start++;
		}
		if(curSum == sum)
		{
			cout<<"subbarray found from index "<<start<<" to "<<i-1<<endl;
			return;
		}
		if(i < n)
		curSum += a[i];
	}
	cout<<"no subarray found"<<endl;
}
int main()
{
	int a[] = {10,15,-5,15,-10,5};
	int sum = 5;
	int n = sizeof(a)/sizeof(a[0]);
	findSubArray(a,n,sum);
}