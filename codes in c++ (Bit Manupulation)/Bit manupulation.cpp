#include<iostream>
using namespace std;
int getBit(int n,int pos)
{
	return((n & (1<<pos))!=0);      // << means left shift operator
}
int main()
{
	cout<<getBit(5,2)<<endl; // 5 is 0101 and (2) means 2nd position on {0101}
	return 0;
}