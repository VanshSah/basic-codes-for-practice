#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int h)
{
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i<j)
	{
		while(a[i] <= pivot)
		i++;
		while((a[j] > pivot))
		j--;
		if(i<j)
		swap(a[i],a[j]);
	}
	swap(a[l],a[j]);
	return j;
}
void quickSort(int a[], int l, int h)
{
	if(l<h)
	{
		int pivot = partition(a, l, h);
		quickSort(a, l, pivot-1);
		quickSort(a, pivot+1, h);
	}
}
int main()
{
	int a[] = {4,6,2,5,7,9,1,3};
	int n = sizeof(a) / sizeof(a[0]);
	quickSort(a,0,n-1);
	cout<<"sorted array =";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}