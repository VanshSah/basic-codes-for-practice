#include<bits/stdc++.h>
#include<climits>
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
	int maxNo=INT_MIN;          // [INT_MIN]  ---------->>   minimum integer possible in c++ (pre--defined)      Also here we are initializing on maxNo through INT+MIN
	int minNo=INT_MAX;          // same as above (pre--defined)                                                  Also same as above
for(int i=0;i<n;i++)
{
	maxNo=max(maxNo,arr[i]);  // update of values
	minNo=min(minNo,arr[i]);
}
cout<<"max no = "<<maxNo<<" "<<"and "<<"min no = "<<minNo;
return 0;
}