#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)          // loop from starting point 
	{
		for(int j=i;j<n;j++)         // loop from ending point
		{
			for(int k=i;k<=j;k++)         // loop for printing element in array between (i) and (j)
			{
				cout<<a[k]<<" ";
				cout<<endl;
			}                           // input = 3 then next line {1 4 6} then output = [1,1,4,1,4,6,4,4,6,6]
		}
	}
	return 0;
}