#include<bits./stdc++.h>
using namespace std;
#define MAX 1000
void heap(int a[], int n, int i)             
{
	int p = i/2;                // p = parent
	if(a[p] > 0)
	{
	    if(a[p] < a[i])
		{
			swap(a[p], a[i]);
			heap(a,n,p);
		}
	}
}
void insertNode(int a[], int& n, int k)      // k = key or we say value
{
	n = n+1;
	a[n-1] = k;                              // n-1 otherwise data after swapping will lost
	heap(a,n,n-1);}
void pA(int a[], int n)            // pA = print array
{
	for(int i=0;i<n;++i)
	cout<<a[i]<<" ";
}
int main()
{
	int a[MAX] = {50,30,40,10,5,20,30};
	int n = 7;
	int k = 60;
	insertNode(a,n,k);
	pA(a,n);
}