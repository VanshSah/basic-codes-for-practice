#include<bits/stdc++.h>
using namespace std;
const int N = 10;                              // size of chess board
int n, a[N], cnt;                             // cnt used to store no of solutions for nqueen problem , n = no of queens and size of the chess-board
bool isSafe(int r, int c)                    // initial row value = 0
{
	for(int i=0;i<r;i++)
	{
		if(a[i] == c || abs(i-r) == abs(a[i]-c))
		{
			return false;
		}
	}
	return true;
}
bool nQueen(int r)
{
	if(r == n)
	{
		cnt++;
		cout<<"solution number ="<<cnt<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i] == j)
				{
					cout<<" Q";
				}
				else
				{
					cout<<"- ";
				}
				cout<<endl;
			}
		}
	}
	else
	{
		for(int c=0;c<n;c++)
		{
			if(isSafe(r,c))
			{
				a[r] = c;
				if(nQueen(r+1))
				return true;
			}
		}
	}
	return false;
}
int main()
{
	cout<<"enter value of n";
	cin>>n;
	nQueen(0);
	cout<<"total numbers of solutions ="<<cnt<<endl;
	return 0;
}
