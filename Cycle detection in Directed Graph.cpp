#include<bits/stdc++.h>
using namespace std;

bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &stack)
{
	stack[src] = true;
	if(!visited[src])
	{
		visited[src] = true; // marked visited if not visited
		for(auto i : adj[src]) //  checking neighbour is visited or not and if not visited
		{
		if(!visited[i] && isCycle(i, adj, visited, stack))
		return true;
		if(stack[i])
		return true;
		}	
	}
		stack[src] = false;
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
	}
	
	bool cycle = false;
	vector<int> stack(n, 0);              // stack array
	vector<bool> visited(n, 0);            // visited array
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && isCycle(i, adj, visited, stack))
		{
			cycle = true;
		}
	}
	if(cycle)
	cout<<"cycle is present ";
	else
	cout<<"cycle isnt present ";
}
/*
4 3      --------->>>>>> input
0 1
1 2
2 1
*/