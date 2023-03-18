#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str1 = "asdfghjklmnn";
	sort(str1.begin(),str1.end());           // ascending order [ begin(),end() ]
	cout<<str1<<endl;
	
	cout<<"\n";
	
	string str2 = "asdfghjklmnn";
	sort(str2.begin(),str2.end(),greater<char>());    // descending order [ begin(),end(),greater<char>() ]
	cout<<str2<<endl;
	
	return 0;
}