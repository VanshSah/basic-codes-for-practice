#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int k)
{
	int low = 0;
	int high = n;
	while(low <= high)
	{
		int mid = (low+high)/2;
		if(a[mid] == k)
		{
			return mid;
		}
		else if(k > a[mid])
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	return -1;
}
int main()
{
	int a[] = {1,3,7,10,22};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<binarySearch(a,n,7);
}