#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)                        // [ descending order ]
	{
		for(int j=1;j<=n-i;j++)                  //     to manipulate space we write this [ loop first ]
		{
			cout<<" ";
		}
		for(int j=1;j<=n;j++)                  // [ 2nd loop ]
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
