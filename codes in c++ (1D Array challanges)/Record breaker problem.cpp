#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];    // here arr[i+1] because we have to compare upto [i+1]
	arr[n] = -1;    // we have to do a[i]>a[i+1] , (-1) means our visitors are non-negative and if we take nth element , so (Atleast) ---->>  a[n-1] > a[n] 
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)       // default condition we have used here
	{
	cout<<"1"<<endl;
	return 0;         // this [return 0] is for main function
	}
	int ans=0;    // initialize to zero
	int mx=-1;    
	for(int i=0;i<n;i++)                            
	{
		if(arr[i]>mx && arr[i]>arr[i+1])               // two cases used through nested (means double loop) Loop
		{
			ans++;
		}
		mx = max(mx,arr[i]);        // updating [mx]
	}
	cout<<ans<<endl;
	return 0;
}