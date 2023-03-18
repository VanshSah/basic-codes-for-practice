#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> dq, dq2;
	int n;
	cin>>n;
	dq2.push_back(1);
	dq2.push_back(3);
	dq2.push_back(5);
	dq2.push_back(7);
	for(int i=0;i<n;i++)
	{
		int key;
		cin>>key;
		dq.push_front(key);        //      front in deque push in reverse order of given string
	}
	cout<<"first dq = ";
	for(auto it = dq.begin(); it != dq.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"second dq2 = ";
	for(auto it = dq2.begin(); it != dq2.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<" Merged deque is ";
	dq.insert(dq.end(), dq2.begin(), dq2.end());
	for(auto it = dq.begin(); it != dq.end(); it++)
	{
		cout<<*it<<" ";
	} 
	cout<<endl;
	cout<<" front and last element of dq = ";
	cout<<dq.front()<<endl<<dq.back();
	cout<<endl;
	cout<<" front and alst element of dq2 =";
	cout<<dq2.front()<<endl<<dq2.back();
}