#include<iostream>
using namespace std;
int main()
{
    int mx = -19999999;  // taking very small value because we have maximize every number , so this initial value should be less and that make easy when comparison happens
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		mx = max(mx,arr[i]);
		cout<<mx<<endl;
	}
	return 0;                     // use input = 6 {o,-9,1,3,-4,5}	                              
}                                 // output = {0,0,1,3,3,5}