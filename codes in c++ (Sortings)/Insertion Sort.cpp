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
	for(int i=1;i<n;i++)            // starting from 1st element not from [0]th element
	{
		int current = arr[i];
		int j = i-1;
		while(arr[j]>current && j>=0)
		{
			arr[j+1]=arr[j];    // moving element to forward in array
			j--;
		}
		arr[j+1] = current;         // adding current element to place where [j] placed after done of (j--)
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
}