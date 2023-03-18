#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
	min = i;
	for(int j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		min = j;
	}
	if(min != i)                 // if  indexes becomes equal for value 4 (yaad rakna bsdk)
	swap(a[i],a[min]);
	}
}
int main()
{
	int a[] = {4,1,9,2,3,6};
	int n = sizeof(a) / sizeof(a[0]);
	selectionSort(a,n);
	cout<<"sorted Array is ";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}