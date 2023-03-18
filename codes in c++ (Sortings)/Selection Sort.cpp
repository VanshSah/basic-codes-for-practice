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
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{ 
	if(arr[j]<arr[i])  // arr[j]<arr[i], means we are traversing elements after first element upto last element
	{
		int temp = arr[j];  // temp use to store value of j, otherwise during swapping value of j if doesnt stored it vanishes or lost
		arr[j] = arr[i];
		arr[i] = temp;
	} 
  }
}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}