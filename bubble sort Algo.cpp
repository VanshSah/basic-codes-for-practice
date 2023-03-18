#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
	for(int i=0;i<n;i++)
	for(int j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	swap(a[j],a[j+1]);
}
int main()
{
	int a[] = {4,3,7,1,5};
	int n = sizeof(a)/sizeof(a[0]);
	bubbleSort(a,n);
	cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << a[i] << " ";
}