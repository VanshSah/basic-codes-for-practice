#include<bits/stdc++.h>
using namespace std;
int bS(int a[], int k, int l, int h)
{
	if(l>h)
	return-1;
	int mid = (l+h)/2;
	if(a[mid] == k)
	return mid;
	if(k > a[mid])
	{return bS(a, k, mid+1, h);}
	return bS(a, k, l, mid-1);
}
int sI(int a[], int k)         // sI = search infinite
{
	int l = 0;
	int h = 1;
	while(a[h] < k)
	{
		l = h;
		h = 2*h;
	}
	return bS(a, k ,l , h);
}
int main()
{
	int a[] = {1,3,7,8,12,58,72};
    int l, h;
	cout<<bS(a, 72, l , h);
}