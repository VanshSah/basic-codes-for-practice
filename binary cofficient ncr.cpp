#include<bits/stdc++.h>
using namespace std;
 int fact(int n)
 {
 	int fac = 1;
 	for(int i=2;i<=n;i++)
 	{
 		fac *= i;	
	}
	return fac;
 }
 int main()
 {
 	int n, r;
 	cin>>n>>r;
 	cout<<fact(n)/(fact(r)*fact(n-r));
 }