#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1;
	getline(cin,str1);
	
	transform(str1.begin(),str1.end(),str1.begin(),::toupper);                 // toupper(function)
	cout<<str1<<endl;
	
	cout<<"\n";
	
	transform(str1.begin(),str1.end(),str1.begin(),::tolower);                 // tolower(function)
	cout<<str1<<endl;
}