#include<iostream>
using namespace std;
int firstocc(int a[],int n,int i,int key)   // n is size, i(pointer)  to store position, key is element we have to find
{
	if(i==n)             // base condition
	{
		return -1;         // if we dont find key then return -1
	}
	if(a[i]==key)          // (i) is initialized to [0]
	{
		return i;
	}
	return firstocc(a,n,i+1,key);
}
int main()
{
	int a[] = {2,57,34,223,4333};
	cout<<firstocc(a,5,0,223)<<endl;
	return 0;
}