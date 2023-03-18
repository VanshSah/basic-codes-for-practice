#include<iostream>
#include<queue>
using namespace std;
struct compare
{
	bool operator() (pair<int, int> a, pair<int, int> b)
	{
		return a.second < b.second;
	}
};
int main()
{
	priority_queue<pair<int, int>, vector<pair<int, int> >, compare> pq;
	pq.push(make_pair(70, 40));
	pq.push(make_pair(35, 80));
	cout<<pq.top().first<<endl;
	pq.pop();
	cout<<pq.top().first<<endl;
}