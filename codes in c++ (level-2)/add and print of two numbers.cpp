#include<iostream>
using namespace std;
void print(int num)                   // here print as (output) comes first because of stack implementation [first in first out] = FIFO
{ 
	cout<<num<<endl;
	return;
}

int add(int num1,int num2)             
{
	print(num1);
	print(num2);
	int sum = num1 +num2;
	return sum;
}
int main()                                 // this main function stores at bottom then int add above this then at top-most void print 
{
	int a=20;
	int b=10;
	cout<<add(a,b)<<endl;
	return 0;
}
