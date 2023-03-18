#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int orginaln=n;
	while(n!=0)
	{
		int remainder = n%10;
		sum += pow(remainder,3);
		n /= 10;
	}
	if(sum==orginaln)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"nahi hai armstrong number"<<endl;
	}
	return 0;
}
