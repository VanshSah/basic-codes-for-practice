#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str = "abcdefghijklmno";
	cout<<'a'-'A'<<endl;                      // by this a-A we check the difference between them then we get 32 then by this we convert the string

	cout<<"\n";

	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a' && str[i]<='z')       // for capital letters
		str[i] -= 32;
	}
	cout<<str<<"\n"<<endl;

	for(int i=0;i<str.size();i++)           // for small letters
	{
		if(str[i]>='A' && str[i]<='z')
		str[i] += 32;
	}
	cout<<str<<endl;
	return 0;
}