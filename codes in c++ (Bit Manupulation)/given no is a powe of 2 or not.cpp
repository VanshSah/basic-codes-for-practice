#include<iostream>
using namespace std;
bool isPowerof2(int n)
{
	return(n && !(n & n-1));            //  n as basic case if n = 0 then return 0 and [!(n & n-1)] means it is not true implies false as a result
}
int main()
{
	cout<<isPowerof2(16)<<endl;
	return 0;
}