#include<bits/stdc++.h>
using namespace std;
int hexaDecimalToDecimal(string n)
{
	int ans=0;
	int x=1;
	int s=n.size();   // n.size() , This is in-build 
	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0' && n[i]<='9')   // 0 to 9 in (hexa)
		{
			ans += x*(n[i] - '0');
		}
		else if(n[i]>='A' && n[i]<='F')        // A to F (hexa) [total 0 to (f/16)]
		{
			ans += x*(n[i] - 'A' + 10);                          // if n[i]=10 then sub - A(10) then add 10 = A
		}
		 x *= 16;                                                 // if n[i]=11 then sub - A(10) then add 10 = B   --------->continue to [16/F]
	}
	return ans;
}
int main()          //  ----------------->>>           for input c have different value and C have different value  [IMP---------->>>> (during giving input and then gaining output)]
{
	string n;
	cin>>n;
	cout<<hexaDecimalToDecimal(n)<<endl;
}
