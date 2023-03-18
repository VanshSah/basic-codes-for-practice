#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{                                                       // input = 4 5 then next line elements total = 4*5=20
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		int row_start=0;
		int row_end=n-1;
		int col_start=0;
		int col_end=m-1;
		while(row_start<=row_end && col_start<=col_end)
		{
			for(int col=col_start;col<=col_end;col++)         // for row_start
			{
				cout<<a[row_start][col]<<" ";
			}
			row_start++;
		
			for(int row=row_start;row<=row_end;row++)         // for coloumn_end
			{
				cout<<a[row][col_end]<<" ";
			}
			col_end--;
			
			for(int col=col_end;col>=col_start;col--)         // for row_end
			{
				cout<<a[row_end][col]<<" ";
			}
			row_end--;
			
			for(int row=row_end;row>=row_start;row--)        // for coloumn_start
			{
				cout<<a[row][col_start]<<" ";
			}
			col_start++;
		}
	}
	return 0;
}