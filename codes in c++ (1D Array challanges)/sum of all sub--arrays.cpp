#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int curr = 0;    // curr means current
	for(int i=0;i<n;i++)
	{
	    curr = 0;  // again initialize to zero
	    for(int j=i;j<n;j++)
	{
		curr += arr[j];
		cout<< curr << endl;
	}
}
return 0;
}