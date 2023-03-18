#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int cnt = 0;
	vector<vector<int>> adj_list(n);
	vector<int> indeg(n, 0);
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin>>u>>v;
		adj_list[u].push_back(v);
		indeg[v]++;
	}
	
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		if(indeg[i] == 0)
		{
			q.push(i);
		}
	}
	
	while(!q.empty())
	{
		cnt++;
		int x = q.front();
		q.pop();
		cout<<x<<" ";
		for(auto it : adj_list[x])
		{
			indeg[it]--;         // subtracting in-degree 
			if(indeg[it] == 0)
			{
				q.push(it);
			}
		}
	}
}
/*
4 3 ------------->>>  input
0 1
1 2
2 3
*/