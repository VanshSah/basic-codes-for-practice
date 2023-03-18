#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
	return(n | 1<<pos);    // we use or operator { | }
}
int main()
{
	cout<<setBit(5,1)<<endl;        // 1 means position and 5 is a number (0101)
	return 0;
}