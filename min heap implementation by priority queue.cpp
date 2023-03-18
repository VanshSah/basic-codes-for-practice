#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int> > pq;     // greater for min heap
	pq.push(5);
	pq.push(2);
	pq.push(7);
	pq.push(4);
	pq.push(1);
	cout<<"Priority queue min heap contains ";
	while(!pq.empty())
	{
		cout<<pq.top()<< " ";
		pq.pop();
	}
	return 0;
}