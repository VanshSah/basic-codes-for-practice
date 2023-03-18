#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string, int> M;
	M["one "] = 1;
	M["two "] = 2;
	M["three "] = 3;
	
//	map<string, int> :: iterator it = M.begin();
	
//	or
	
	for(const auto& pair : M)
	
//	while(it != M.end())
	{
		cout<<"key "<<pair.first<< " value "<<pair.second<<endl;
	//	cout<<"key "<<it->first<<"value "<<it->second<<endl;
	//	++it;
	
	}
}