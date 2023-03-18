#include<bits/stdc++.h>
using namespace std;
int main()
{
	int maal;      // ((((1ST LEVEL))))     simple if else conditions
	cout<<"enter the maal = ";
	cin>>maal;
	/*    if(maal>1000)
	{
		cout<<"ab to party hogi";
	}
	else if(maal==1000)   // == will work && = [(no error ?)]
	{
		cout<<"seh lenge thora";
	}
	else
	{
		cout<<"chalaja bhai";
	}
	return 0;
	
}     */

	if(maal>1000)        // ((((2ND LEVEL)))) 
	{
		if(maal>=1500)      // if esle in if condition [sub implementation]
		{
			cout<<"oyo";
		}
		else if(maal=1200)     // space between else if otherwise elseif = [error]
		{
			cout<<"ashrum";
		 } 
	}
		 return 0;
	}

