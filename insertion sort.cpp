#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
	int temp, j;
	for(int i=1;i<n;i++)
	{
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
int main()
{
	int a[] = {8,4,1,5,9,2};
	int n = sizeof(a)/sizeof(a[0]);
	insertionSort(a,n);
	cout<<"sorted Array is ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}