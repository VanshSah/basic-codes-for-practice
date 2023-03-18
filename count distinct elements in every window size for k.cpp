#include<iostream>
#include<unordered_map>
using namespace std;
void countDistinct(int a[], int n, int k)
{
	unordered_map<int,int> freq;
	int distinct = 0;
	for(int i=0;i<k;i++)
	{
		if(freq[a[i]] == 0)
		{
		distinct++;
	    }
	    freq[a[i]]++;
	}
	cout<<distinct<<" ";
	for(int i=k;i<n;i++)
	{
		if(freq[a[i-k]] == 1)
		{
			distinct--;
		}
		freq[a[i-k]]--;
		if(freq[a[i]] == 0)
		{
			distinct++;
		}
		freq[a[i]]++;
		cout<<distinct<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[] = {1,2,2,1,3,1,1,3};
	int n = sizeof(a)/sizeof(a[0]);
	int k = 4;
	countDistinct(a,n,k);
}