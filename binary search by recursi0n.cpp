#include<bits/stdc++.h>
using namespace std;
int bS(int a[], int n, int k, int l, int h)
{
	if(l > h)                    // base condition as implement in recursive method
	return -1;
	int mid = (l+h)/2;
	if(a[mid] == k)
	return mid;
	if(k > a[mid])
	{return bS(a, n, k, mid+1, h);}
	return bS(a, n, k, l, mid-1);
}
int main()
{
	int a[] = {2,3,22,56,77};              // if array is unsorted then we have to change on code so for binary search array should be sorted
	int n = sizeof(a)/sizeof(a[0]);
	cout<<bS(a,n,77,0,n);
}