#include<iostream>
using namespace std;
int main()
{
	int a[]={10,20,30};
	cout<<*a<<"\n"<<endl;           // 1st way  ------->>>  but print value of 1st index only means value of [0th] index
	
	
	int *ptr=a;              // 2nd way
	for(int i=0;i<3;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
	
	cout<<"\n";                 // space add for better view


	int *ptr2 = a;             // 3rd way
	for(int i=0;i<3;i++)
	{
		cout<<*(a+i)<<endl;           // we cant do like cout<<*ptr2<<endl; then next line a++; {wrong method}
	}
	return 0;
}