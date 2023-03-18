#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter x and y = ";
	cin>>x>>y;
	for(int num=x;num<=y;num++)     // [num] we use same as when we need to store addition of two numbers in [[sum]]
	{
		int i;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				break;
			}
		}
		if(num==i)
		{
			cout<<"prime numbers between x and y are = "<<num<<endl;
		}
	}
	return 0;
}
