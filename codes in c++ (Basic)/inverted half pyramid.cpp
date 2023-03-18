#include<bits/stdc++.h>
using namespace std;
int main()
 /*   {
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)                                 // to form inverted pyramid   [decreasing order]            (1ST)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}         */     


  {                                                         
	int z;
	cout<<"enter value of z = ";                          // // to form inverted pyramid   [increasing order]            (2ND)
	cin>>z;
	for(int i=1;i<=z;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}             
