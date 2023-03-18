#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
bool comparator(int a, int b)
{
	return a<b;
}
int main()
{
	list<int> L1, L2;
	L2.push_back(1);
	L2.push_back(3);
	L2.push_back(5);
	L2.push_back(7);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int key;
		cin>>key;
		{	
			L1.push_back(key);
		}
	}
	cout<<" L1 = ";
	for(auto it = L1.begin(); it != L1.end(); ++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<" L2 = ";
	for(auto it = L2.begin(); it != L2.end(); ++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	L1.merge(L2, comparator);
	cout<<" L1 after merged = ";
	for(auto it = L1.begin(); it!= L1.end(); ++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	L1.remove(10);
	cout<<" Final ans = ";
	for(auto it = L1.begin(); it != L1.end(); ++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	L2.swap(L1);
	for(auto it = L1.begin(); it != L1.end(); ++it)
	{
		cout<<*it<<" ";
	}
}