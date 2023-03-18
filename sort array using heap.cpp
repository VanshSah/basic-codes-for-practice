#include<bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int i)
{
	int larg = i;
	int l = 2*i;
	int r = 2*i+1;
	if(l<n && a[l]>a[larg])
	larg = l;
	if(r<n && a[r]>a[larg])
	larg = r;
	if(larg != i)
	{
		swap(a[i], a[larg]);
		heapify(a,n,larg);
	} 
}
void heapSort(int a[], int n)
{
	for(int i=n/2-1;i>=0;i--)
	heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[0], a[i]);
		heapify(a,i,0);
	}
}
void pA(int a[], int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int a[] = {12,11,13,5,6,7};
	int n = sizeof(a)/sizeof(a[0]);
	heapSort(a,n);
	cout<<"sorted aray =";
	pA(a,n);
}