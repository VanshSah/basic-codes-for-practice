#include<iostream>
using namespace std;
bool sorted(int a[],int n)
{
	if(n==1)        // base case using n==1 means atleast one element is present on array which should be sorted acc to logic
	{
		return true;
	}
	bool restArray = sorted(a+1,n-1); // a is array so a+1 means pointer shift from 0th position to 1st and n-1 Also n-1 for size of an array
	return (a[0]<a[1] && restArray);   // a[0]<a[1] = means checking 1st two elements are sorted and then restArray = means remaining array is on sorted order or not
}
int main()
{
	int a[] = {1,2,3,4,5};
	cout<<sorted(a,5)<<endl;
	return 0;	               // output = 1 means array is sorted
}