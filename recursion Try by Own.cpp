#include<bits/stdc++.h>
using namespace std;
void printHI(int n)
{
	if(n==0)
	return ;
	cout<<"uh ah\n";
	return printHI(n-1);
}
int main()
{
int n;
cin>>n;
printHI(n);
}