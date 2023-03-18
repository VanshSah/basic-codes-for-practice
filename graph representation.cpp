#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a; i<b; i++)

const int N = 1e5+2, MOD = 1e9+7;

vi adj[N];

signed main()
{
	int n, m;
	cin>>n>>m;
	vvi adjM(n+1, vi(n+1, 0));
	rep(i,0,m)
	{
		int x, y;
		cin>>x>>y;
		adjM[x][y] = 1;
		adjM[y][x] = 1;
		
	}
	cout<<"Adjacency MAtrix of graph is "<<endl;
	rep(i,1,n+1)
	{
		rep(j,1,n+1)
		cout<<adjM[i][j]<<" ";
		cout<<endl;
	}
	/*
7 7          ---------------------------->>>>>>>> input 1st
1 2
1 3
2 4
2 5
2 6
2 7
7 3
*/
	
	if(adjM[3][7] == 1)
	{
		cout<<"edge between them is present ";
	}
	else
	{
		cout<<"No edge present ";
	}
	
	cout<< endl << endl;
	
	cin>>n>>m;
	rep(i,0,m)
	{
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cout<<"Adjacency list of graph is ";
	rep(i,1,n+1)
	{
		cout<<i<<"->";
		for(int x : adj[i])
		{
			cout<<x<<" ";
			cout<<endl;
		}
	}	
	/*
7 7     --------------------------->>>>> input 2nd
1 2
1 3
2 4
2 5
2 6
2 7
7 3
*/
}  
