#include<bits/stdc++.h>
using namespace std;
int intersect(int a[], int b[], int n, int m)
{
	int count = 0;
	set<int> set; 
	for(int i=0;i<n;i++)
	set.insert(a[i]);
	for(int i=0;i<m;i++)
	{
		if(set.count(b[i]))
		{
			count++;
			set.erase(b[i]);
		}
	}
	return count;
}
int main()
{
	int a[] = {2,3,4,5,6};
	int b[] = {3,5};
	int n = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);
	cout<<intersect(a,b,n,m);
}