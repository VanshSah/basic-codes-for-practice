#include <bits/stdc++.h>
using namespace std;
int getMaxArea(int a[], int n)
{
	stack<int> s;
	s.push(-1);  							// push -1 to the stack because for some elements there will be no previous smaller element in the array and we can store -1 as the index for previous smaller.
	int area = a[0];
	int i = 0;
	vector<int> L_S(n, -1), R_S(n, n);  						// Declare left_smaller and right_smaller array of size n and initialize them with -1 and n as their default value. 
	while (i < n)      
	 {
		while (!s.empty() && s.top() != -1	&& a[s.top()] > a[i])          // if the current element a[s.top()] is smaller than element with index stored on the top of stack a[i]
		{
			R_S[s.top()] = i;         			// store the current element index as the right_smaller for the popped element.
           													//  right_smaller[i] will store the index of next smaller element for ith element of the array.
			
			s.pop();										// then, we pop the top element 
		}
		if (i > 0 && a[i] == a[i - 1])  		 // since the previous element is same as current element, the left_smaller will always be the same for both.
		{

			L_S[i] = L_S[i - 1];                            // left_smaller[i] will store the index of previous smaller element for ith element of the array.
		}
		else 
		{
			L_S[i] = s.top(); 			 // Element with the index stored on the top of the stack is always smaller than the current element. Therefore the left_smaller[i] will always be s.top().
		}
		s.push(i);
		i++;
	}
	for (int j = 0; j < n; j++) 
	{
		area = max(area, a[j]* (R_S[j]- L_S[j] - 1));
	}
	return area;
}
int main()
{
	int hist[] = {4,2,1,5,6,3,2,4,2};
	int n = sizeof(hist) / sizeof(hist[0]);
	cout << "maxArea = " << getMaxArea(hist, n) << endl;
	return 0;
}
