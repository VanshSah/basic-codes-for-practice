#include<iostream>
using namespace std;
void primeSieve(int n)
{
	int prime [100] = {0};
	for(int i=2;i<=n;i++)        // checking with i=2 
	{
		if(prime[i]==0)         // 0 used for unmarked
		{
			for(int j=i*i;j<=n;j+=i)    // numers lies between square of gievn number thats why [i*i]   and j+=i because we have to jump in refrence of i to find numbers
			{
				prime[j]=1;      // 1 for marked and j for prime numbers and if we write i in place of j so it gives non-prime numbers
			}
		}
	}
	for(int i=2;i<=n;i++)      
	if(prime[i]==0)            // now checking for un-marked numbers
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	primeSieve(n);
	return 0;
}