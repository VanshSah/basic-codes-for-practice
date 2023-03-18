#include<bits/stdc++.h>
using namespace std;
int count(int r, int c)
{
	if(r==1 || c==1)
	return 1;
	return count(r,c-1) + count(r-1,c);
}
int main()
{
	cout<<count(3,4);
}