#include<bits/stdc++.h>
using namespace std;
int bS(int a[], int k, int n)
{
	int l = 0;
	int h = n-1;
	while(l <= h)
{	
    int mid = (l+h)/2; 
	if(a[mid] == k)
	return mid;
	if(a[l] < a[mid])
{
	if(k >= a[l] && k < a[mid])
	h = mid-1;
	else
	l = mid+1;
}
    else
{
    if(k > a[mid] && k <= a[h])
	l = mid+1;
	else
	h = mid-1;
}
}
return -1;
}
int main()
{
	int a[] = {20,30,40,50,60,5,10};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<bS(a, 5, n);
} 