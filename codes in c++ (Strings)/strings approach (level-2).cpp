#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	getline(cin,str1);
	cout<<str1[4]<<endl;        // to find alphabet at position 4th
	
	cout<<"\n";
	
	string str2 = "andlnaldnlsandlandlanlandndlasnlddaldl";        // normal output showing
	cout<<str2<<endl;
	
	cout<<"\n";
	 
	str2.clear();            // clearing all the alphabets
	cout<<str2<<endl;
	return 0;
}