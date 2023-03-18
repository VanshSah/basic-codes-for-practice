#include<iostream>
using namespace std;     
bool pairSum(int a[], int n, int k)          // if any two elements present in Array have sum equal to k 
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
			cout<<i<<" "<<j<<endl;      // here by this we get our target sum	
				return true;
			}
		}
	}
	return false;
}
int main()                        // [ Time Complexity = 0(n) square ]
{
	int n; 
	int a[] = {2,4,7,11,14,16,20,21};
	int k = 31;
	cout<<pairSum(a,n,k)<<endl;
	return 0;
}