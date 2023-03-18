#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int target;
	cin>>target;
	int mat[n][m];   // mat means Matrix
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}
	int r=0,c=m-1;   // r to top-right condition and c is top-left condition
	bool found;
	while(r<n && c>=0)
	{
		if(mat[r][c] == target)
		{
			found = true;
		}
	    if(mat[r][c] > target)             // input 3 3 9 (here 3 and 3 are mtrix and 9 is we have to find) then next line 1 2 3 then next line 4 4 4 then next line 8 8 9 then output = elemnet found
		{
	      c--;
		}
		else
		{
			r++;
		}
	}
	if(found)
	cout<<"element found";
	else
	cout<<"element not found";
}