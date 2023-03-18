#include<iostream>
#include<queue>
using namespace std;
int largestElement(int* a,int n, int k)
{
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
		if(pq.size() > k)
		{
			pq.pop();
		} 
	}
	return pq.top();
}
int main()
{
	int a[] = {5,2,7,4,1};
	int n = sizeof(a)/sizeof(a[0]);
	int k = 3;
	cout<<"kth largest element is "<<largestElement(a, n, k); 
}