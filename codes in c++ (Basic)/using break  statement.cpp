#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value of a = ";
	cin>>a;
	int i;
	for(int i=2;i<a;i++)        // [i<a] use for divisible is possible  (means if a=10 and i>10 so divisible not possible) 
	{
		if(a%i==0)
		{
			cout<<"the number is non-prime "<<endl;
			break;                                        // this statement tatally terminate the code but continue statement skips next but display remaining
		}
	}
		if(i==a)                    // this use to figure out cout will come from break statement or not
		{
			cout<<"the number is prime "<<endl;
		}
		return 0;
	}

