#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n, m;
vector<vector<int>> adj;
vector<int> components;

int get_comp(int idx)
{
	if(vis[idx])
	return 0;           // return current node
	vis[idx] = true;
	int ans = 1; // initailize with 1 because of count of itself
	for(auto i : adj[idx])    // checking the neighbours	
	{
		if(!vis[i])
		ans += get_comp(i); // adding all in one component even add its neighbour
		vis[i] = true;
	}
	return ans;
}

int main()
{
	cin>>n>>m;
	adj = vector<vector<int>>(n);
	vis = vector<bool>(n);
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			components.push_back(get_comp(i)); // get_comp gives the size components after adding new ones
		}
	}
	for(auto i : components)
	{
		cout<<i<<" ";
	}
}
/*
5 3        ----------------->>> input
0 1
2 3
0 4
*/