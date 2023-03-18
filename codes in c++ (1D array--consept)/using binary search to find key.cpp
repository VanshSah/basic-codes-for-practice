#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
	int s=0;    // (S)  ---------->   first element of array
	int e=n;     // (e)  ==========>   last element of array
	while(s<=e)  // if s>e it means element isnt present in our array
	{
		int mid=(s+e)/2;   // to go to mid (index) location of an array
		if(arr[mid]==key)
		{
			return mid;      // reached the mid place and then search will continue from here
		}
		else if(arr[mid]>key)
		{
			e=mid-1;    // backward the pointer from the last element when key is less than the mid element
		}
		else
		{
			s=mid+1;   // forward the pointer from first element when key is more than the mid element
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<binarySearch(arr,n,key)<<endl;
	return 0;
}