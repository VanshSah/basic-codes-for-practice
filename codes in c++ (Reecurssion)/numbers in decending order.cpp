#include<iostream>
using namespace std;
void dec(int n)
{
	if(n==0)        // 0 means dec order end at 1 if 2 in place of 0 then dec order end at 3 means 2,1,0 will not print
	{
		return;
	}
	cout<<n<<endl;
	dec(n-1);            // for decreasing and if we write this line before above line then ascending order as output
}
int main()
{
	int n;
	cin>>n;
	dec(n);
}