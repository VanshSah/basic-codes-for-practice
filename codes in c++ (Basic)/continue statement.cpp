#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<50;i++)
	{
		if(i%2==0)      // for no divisible by 2
		{
			continue;          // but because of continue it skips next step
		}
		cout<<"numbers divisible by 2 = "<<i<<endl;           // this is the next step
	}
	return 0;
}

