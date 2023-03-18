#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str = "vansh";                 // 1st way
	cout<<str;
	
	cout<<"\n";
	
	string str1(7,'x');                     // 2nd way
	cout<<str1<<endl;
	
	cout<<"\n";
	
/*	string str2;                           // 3rd way
	cin>>str2;
	cout<<str2<<endl;
	
	cout<<"\n";  */
	
	string str3;                           // 4th way
	getline(cin,str3);
	cout<<str3<<endl;
	
	return 0;
}