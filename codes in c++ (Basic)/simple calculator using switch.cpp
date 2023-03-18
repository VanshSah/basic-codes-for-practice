#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x,y;
	cout<<"enter the x and y = ";
	cin>>x>>y;
	
	char op;
	cout<<"enter the operator = ";
	cin>>op;
	
	switch (op)
	{
		case '+':
			cout<<"sum = "<<x+y<<endl;
			break;
		case '-':
			cout<<"sub = "<<x-y<<endl;
			break;
		case '*':
		    cout<<"mul = "<<x*y<<endl;
			break;
		case '/':
		    cout<<"div = "<<x/y<<endl;
			break;
		default :
		cout<<"itna hi hai, sasta calculator hai na chomu";			
			
	}
	return 0;
	
}
