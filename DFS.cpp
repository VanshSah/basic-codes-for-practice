#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];       // arrays of vector

void dfs(int node)
{
	vis[node] = 1;          // pre order
	cout<<node<<" ";
	
	vector<int> :: iterator it;          // in order
	for(it = adj[node].begin(); it != adj[node].end(); it++)
	{
		if(vis[*it]);   //	if visited of that node so do nothing 
		else
		{
			dfs(*it);
		}
	}
	
//	cout<<node<<" ";  // post order ( comment out for post order as output and before this comment the preorder output )
}
int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
	{
		vis[i] = false;
	}
	int x, y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		
	}
		dfs(1);  // root node
}