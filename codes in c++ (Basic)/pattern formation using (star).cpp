#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row , col;
	cout<<"enter row and coloumn = ";
	cin>>row>>col;
	for(int i=1;i<=row;i++)               // for formation of rows
	{
		for(int j=1;j<=col;j++)           // for formation of coloumns
		{
			cout<<"*";
		}
		cout<<endl;        // by this pattern will form (1st row then coloumn then repeat) [works to break loop and help to form pattern]
	}
	return 0;
}
