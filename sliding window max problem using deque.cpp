#include <bits/stdc++.h>
using namespace std;
void printKMax(int a[], int N, int K)
{
	deque<int> Qi(K);													// Qi that will store indexes					/* Process first k (or first window) elements of array */
	int i;
	for (i = 0; i < K; ++i) 
	{
		while ((!Qi.empty()) && a[i] >= a[Qi.back()])          						// Qi use for removing small elements
		Qi.pop_back();															// Remove from rear
		Qi.push_back(i);														// Add new element at rear of queue
	}
	// Process rest of the elements,
	// i.e., from arr[k] to arr[n-1]
	for (; i < N; ++i) 
	{
		cout << a[Qi.front()] << " ";              								// printing largest element
		while ((!Qi.empty()) && Qi.front() <= i - K)							// removing element which is out from window
		Qi.pop_front();														// Remove from front of queue
		while ((!Qi.empty()) && a[i] >= a[Qi.back()])         					// (remove useless elements)
		Qi.pop_back();
		Qi.push_back(i);														// Add current element at the rear of Qi
	}
	cout << a[Qi.front()];                                                      // printing max elements of last window
}
int main()
{
	int a[] = { 12, 1, 78, 90, 57, 89, 56 };
	int N = sizeof(a) / sizeof(a[0]);
	int K = 3;
	printKMax(a, N, K);
}
