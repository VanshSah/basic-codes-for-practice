#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "abc";
	string str2 = "abc";
	cout<<str1.compare(str2)<<endl;  // if value are equal then  [0] output

	cout<<"\n";

	string str3 = "mno";
	string str4 = "uvw";
	cout<<str3.compare(str4)<<endl;  // if vaue is small then next value so [-1] output

	cout<<"\n";

	string str5 = "hij";
	string str6 = "EFG";
	cout<<str5.compare(str6)<<endl;  // if value is greater then next value so [1] output
	
	return 0;
}