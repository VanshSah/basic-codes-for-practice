#include<iostream>
using namespace std;
int updateBit(int n,int pos,int value)
{
	int mask = ~(1<<pos);                // clearing bit
	n = n& mask;                         // clearing bit
	return(n | value<<pos);              // setting bit           [ updateBit = clear bit + set bit ]  ||  value used to insert value according to user
}
int main()
{
	cout<<updateBit(5,1,1)<<endl;          // 5 is number , 1 is position , 1 is a value that we have to put on position 1st of number 5
	return 0;
}