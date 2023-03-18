#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, s;          // n = no of elements and s = sum
	cin>>n>>s;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 int i=0; int j=0; int st=-1; int en=-1; int sum=0;  // these are iterators, also here st and en (start are final)
	 while(j<n && sum+arr[j]<=s)
	 {
	 	sum += arr[j];        // updating 
	 	j++;
	 }
	 if(sum==s)     // means we get our answer so for that	 {   
	{
	    cout<<i+1<<" "<<j<<endl;    // i+1 because we have to find from index 1st and j is not inclusive
	 	return 0;      // when return 0 declared it means no need of code reading more so terminate program
	 }
	 while(j<n)
	 {
	 	sum += arr[j];
	 	while(sum>s)
	 	{
	 		sum -= arr[i];
	 		i++;
		}
		if(sum==s)
		{
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	 }
	 cout<<st<<" "<<en<<endl;
}