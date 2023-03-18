#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1,2,3,4,5,6,1,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n);
	int F = unique(a, a+n) - a;
	cout<<"Distinct elements =";
	for(int i =0;i<F;i++)
	cout<<a[i]<<" ";
}