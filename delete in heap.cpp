#include<bits/stdc++.h>
using namespace std;
void heap(int a[], int n, int i)
{
	int largest = i;
	int l = 2*i;
	int r = 2*i+1;
	if(l < n && a[l] > a[largest])
	largest = l;
	if((r < n && a[r] > a[largest]))
	largest = r;
	if(largest != i)
	{
		swap(a[i], a[largest]);
		heap(a,n,largest);
	}
}
void deleteNode(int a[], int& n)
{
	int lastElement = a[n-1];
	a[0] = lastElement;            // update to top
	n = n-1;
	heap(a,n,0);
}
void pA(int a[], int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int a[] = {40,30,10,20,15};
	int n = sizeof(a)/sizeof(a[0]);
	deleteNode(a,n);
	pA(a,n);
}