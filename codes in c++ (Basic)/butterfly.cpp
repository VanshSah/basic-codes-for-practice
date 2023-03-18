#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)                                            //   part 1st  ------------------------->            [increasing order]
	{
		for(int j=1;j<=i;j++)                                       //   loop (A)
		{
			cout<<"*";
		}
		
		int space= 2*n - 2*i;                                        // for finding required space        //            [ loop(B) ]   // [ {2*n(8) - 2*i(1)} = 14]  // (take input = 8)
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		
		for(int j=1;j<=i;j++)                                       //   loop (C)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i=n;i>=1;i--)                                            //   part 2nd   ------------------------------>        [decresing order]
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		
		int space= 2*n - 2*i;
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
}
