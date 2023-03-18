#include<iostream>
using namespace std;
int main()
/*   {
	int n;
	cout<<"enter the value of n = ";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum of numbers(n) = "<<sum;
	return 0;
}     */

{
	int n;
	cin>>n;
	int mul=1;
	for(int i=1;i!=n;i++)
	{
		mul=mul*i;
	}
	cout<<"multiplication of inserted numbers = "<<mul<<endl;
}
