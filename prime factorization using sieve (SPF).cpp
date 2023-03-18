#include<iostream>
using namespace std;
void primeFactor(int n)
{
	int spf[100] = {0};  // spf is smallest prime factor
	for(int i=2;i<=n;i++)
	{
		spf[i]=i;            // automatically giving spf by user
	}
	for(int i=2;i<=n;i++)
	{
		if(spf[i]==i)            // checking already initialized or not
		{
			for(int j=i*i;j<=n;j+=i)
			{
				if(spf[j]==j)      // means unmarked or not
				{
					spf[j]=i;     // updating 
				}
			}
		}
	}
	while(n!=1)
	{
		cout<<spf[n]<<" ";
		n=n/spf[n];
	}
}
int main()
{
	int n;
	cin>>n;
	primeFactor(n);
	return 0;
}