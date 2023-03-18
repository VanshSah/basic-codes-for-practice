#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_multiset<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(10);
	s.insert(11);
	s.insert(17);
	s.insert(24);
	s.insert(10);
	for(auto it = s.begin(); it != s.end(); it++)
	{
		cout<<*it<<" ";
	} 
	cout<<endl;
	if(s.find(10) != s.end())
	{
		cout<<"element is in set ";
	}
	else
	{
		cout<<"element ia not in set ";
	}
	s.erase(s.find(17));
	cout<<"final elements are = ";
	for(auto it = s.begin(); it != s.end(); it++)
	{
		cout<<*it<<" ";
	} 
}