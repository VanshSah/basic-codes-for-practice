#include<iostream>
using namespace std;
int main()
{
	int a,b,c;      // finding largest number
	cout<<"enter a = \n";
	cin>>a;
	cout<<"enter b = \n";
	cin>>b;
	cout<<"enter c = \n";
	cin>>c;
/*	if (a>b)              (((self made code))) but doesnt run [?]
	{
		if(a>c)
		{
			cout<<"greatest number = "<<a;
		}
	}
	else if (b>a)
	{
		if (b>c)
		{
			cout<<"greatest number = "<<b;
		}
	}
    else 
	          //     (c>a)     violate the way of writing code means we cant use condition(c>a) we just have to left that and directly goes for cout
    
    	//   {
		//  if(c>b)
    	{
    		cout<<"gretest no = "<<c;
		}
	
}         */
if(a>b)
{
	if(a>c)
	{
		cout<<"gretest no = "<<a;
	}
	else
	{
		cout<<"gretest no = "<<c;
	}
}
else 
{
	if(b>c)
	{
		cout<<"grestest no = "<<b;
	}
	else
	{
		cout<<"gretest no = "<<c;
	}
}
return 0;
}

