#include<iostream>
using namespace std;
int clearBit(int n,int pos)  // clear bit means at reqired pos we make that 1 to 0 and 0 as 0
{
	int mask = ~(1<<pos);    // here we use masking by which we do [1,s] compliment of (5) then add with original number (5)
	return(n & mask);
}
int main()
{
	cout<<clearBit(5,3)<<endl;
	return 0;
}