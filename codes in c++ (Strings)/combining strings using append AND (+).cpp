#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cin>>str1;
	string str2;
	cin>>str2;
	cout<<str1+str2<<endl;
	cout<<"\n";
	str1.append(str2);           // IF THIS STATEMENT BEFORE STR1+STR2 , SO IT BECOMES =====>>> [STR1+SRT2+STR2]
	cout<<str1<<endl;
	//cout<<"\n";
	//cout<<str1+str2<<endl;
	return 0;
}