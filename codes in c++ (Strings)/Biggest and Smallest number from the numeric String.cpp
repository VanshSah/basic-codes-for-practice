#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str = "14972397922722";
	
	sort(str.begin(),str.end(),greater<int>());         // we can use char instead of int          [ greatest form ]
	cout<<str<<endl;
	
	cout<<"\n";
	
	sort(str.begin(),str.end());             // [ smallest form ]
	cout<<str<<endl;
	return 0;
}