#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number = ";
	cin>>num;
	while(num>=10)   // here we give condition that number should be equal to 10 or greater than 10 (total input = (>=10))
	  {
	  	cout<<"insert number = "<<num+1<<endl;   // num+1 like we insert number and then we get +1 of that number
	  	cout<<"unsert number = "<<num*2<<endl;
	  	cin>>num;
	  }
	  return 0;
}
