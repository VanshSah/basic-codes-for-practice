#include<bits/stdc++.h>
using namespace std;
bool palin(string s, int l, int r)
{
	if(l>=r)
	return true;
	if(s[l] != s[r])
	return false;
    return palin(s, l+1, r-1);
}
int main()
{
	cout<<palin("abba",0,3);           // for even
	cout<<endl;
	cout<<palin("aba",0,2);           // 1 means true   (fro odd)
	cout<<endl;
	cout<<palin("abcd",0,3);          // 0 means false
}