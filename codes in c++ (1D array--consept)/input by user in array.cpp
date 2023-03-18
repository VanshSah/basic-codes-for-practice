#include<bits/stdc++.h>
using namespace std;
/*             int main()
{
	int arr[5] = {12,22,34,20};     // here total 3 positions because starts with 0 then 1 then 2 then 3 then no value so it gives after 3rd place , [0] as any input
	cout<<arr[4]<<endl;                // is we want to find extra position which are not on array so it gives [0] like as (4)
}                      */
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}