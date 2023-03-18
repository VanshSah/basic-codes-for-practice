#include<iostream>
using namespace std;
int divisible(int n,int a,int b)
{
	int c1 = n/a;              //   c used for  count, for a=n/a, for b=n/b, etc
	int c2 = n/b;
	int c3 = n/(a*b);           // number divisible by both
	return c1+c2-c3;          
}
int main()
{
	int n, a, b;
	cin>>n>>a>>b;
	cout<<divisible(n,a,b);
	return 0;                   // input = 40,5,7  and output = 12
}