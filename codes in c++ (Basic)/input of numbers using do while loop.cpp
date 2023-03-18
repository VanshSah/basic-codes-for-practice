#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;  // do while loop run atleast one over the setted condition but while run only according to given condition
	cout<<"enter the number = ";
	cin>>num;
	do
	{
		cout<<"inputted number = "<<num<<endl;
		cin>>num;
	}
	while(num>=10);
	return 0;
}
