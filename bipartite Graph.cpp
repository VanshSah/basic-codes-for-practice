#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;             //  list
vector<bool> vis;                // visited array 
vector<int> col;       // color
bool bipart;         // to check whether graph is biparted or not
void color(int u, int curr)      // u is current node and curr is current color
{
    if(col[u] != -1 && col[u] != curr)     // (!= -1) means coloured and (!= curr means not equal to color we want to give )
    {
        bipart = false;
        return; 
    }
    col[u] = curr;
    if(vis[u])
    return; 
    vis[u] = true;
    for(auto i : adj[u]) // checking the neighbours
    {
        color(i, curr xor 1);       // xor 1 gives (input 0 so change to 1 and vice versa)
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    bipart = true; 
    adj = vector<vector<int>> (n);
    vis = vector<bool> (n, false);      // false means not visited
    col = vector<int> (n, -1);          // -1 means colorless
    
    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    for(int i=0;i<n;i++)        // traversing the graph
    {
        if(!vis[i])
        {
            color(i, 0);   // not visited so it means also doesnt have any color thats why 0 
        }
    }
    
    if(bipart)
    cout<<"graph is bipart ";
    else
    cout<<"graph is not bipart "; 
}