#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if((i+j)%2==0)                                // find even and odd through remainder (%)
			{
				cout<<" 1";                     // 1 if even
			}
			else
			{
				cout<<" 0";                     // 0 if odd
			}
			
		}
		cout<<endl;
	}

	return 0;
}
