#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)                // decreasing order
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}