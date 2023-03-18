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
int counter=1;        //  [iteration]
while(counter<n)
{
	for(int i=0;i<n-counter;i++)  // for ith iteration we checking it [n-i] iteration or we say (n-counter)
	{
		if(arr[i]>arr[i+1])        // if first element[i] greater then the next element[i+1] , then ---->>
		{
			int temp = arr[i];     //  [then swapping] ---->> (starts)
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
    }
    counter++;        // moving to next iteration
}
for(int i=0;i<n;i++)           // for loop to print the array
{
	cout<<arr[i]<<" "<<endl;
}
}