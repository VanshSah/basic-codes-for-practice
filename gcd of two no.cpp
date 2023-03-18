#include<iostream>
using namespace std;
int gcd(int a,int b)         // gcd = greatest common factor = hcf
{
	while(b!=0)
	{
		int rem=a%b;
			a=b;                // changing 2nd no 1st no
			b=rem;             // changing remainder to 2nd no 
	} 
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;      //  input  = 42,42 out = 6
	return 0;
}