#include<iostream>
#include<queue>
using namespace std;
int minCost(int a[], int n)
{
    priority_queue<int, vector<int>, greater<int> > pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	int ans = 0;
	while(pq.size() > 1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		int sum = first + second;
		ans += sum;
		pq.push(sum);
	} 
	return ans;
}
int main()
{
	int a[] = {2,5,4,8,6,9};
	int n = sizeof(a) / sizeof(a[0]);
	cout<<minCost(a,n);
}