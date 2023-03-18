#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s = "aslfnivovoeoaaaaaa";
	int freq[26];                             // array of size 26
	for(int i=0;i<26;i++)
	freq[i]=0;                               // initilize to 0
	for(int i=0;i<s.size();i++)
	freq[s[i]-'a']++;                        // here i works as index example { i =a then a - a = 0 th index } another example { i=b then b - a = 1st endex }
	char ans = 'a';              // to store variable
	int maxF = 0;             // to store variable
	for(int i=0;i<26;i++)
	{
		if(freq[i]>maxF)         // here we can use freq[i]>=maxF
		{
			maxF = freq[i];
			ans = i+'a';
		}
	}
	cout<<maxF<<" "<<ans<<endl;
	return 0;
}