#include<bits/stdc++.h>
using namespace std;
void heap(int a[], int n, int i)
{
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;
	if(l < n && a[l] > a[largest])
	largest = l;
	if(r < n && a[r] > a[largest])
	largest = r;
	if(largest != i)
	{
	swap(a[i], a[largest]);
	heap(a,n,largest);
	}
}
void buildHeap(int a[], int n)
{
	int startIndex = (n/2)-1;
	for(int i=startIndex;i>=0;i--)
	heap(a,n,i);
}
void pH(int a[], int n)          // pH = print heap
{
	cout<<" arrays representation of heap ";
	for(int i=0;i<n;++i)
	cout<<a[i]<<" ";
}
int main()
{
	int a[] = {1,3,5,4,6,13,10,9,8,15,17};
	int n = sizeof(a)/sizeof(a[0]);
	buildHeap(a,n);
	pH(a,n);
}