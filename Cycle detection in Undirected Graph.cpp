#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>> &adj, vector<bool> &visited, int parent)            // we have used src in place of i
{
	visited[src] = true;
	for(auto i : adj[src])
	{
		if(i != parent)
		{
			if(visited[i])
				return true;
			if(!visited[i] && iscycle(i, adj, visited, src))      // here src or parent
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int n, m;
	cin>>n>>m;
	vector<vector<int>> adj(n);
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	bool cycle = false;
	vector<bool> visited(n, false);     // visited array
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && iscycle(i, adj, visited, -1))           // -1 shows parent is present
		{
			cycle = true;
		}
	}
	if(cycle)
	{
		cout<<"Cycle is present ";
	}
	else
	{
		cout<<"Cycle isnt present ";
	}
}
/*
4 3
0 1
1 2
2 0
*/