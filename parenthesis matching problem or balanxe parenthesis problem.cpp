#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string S)
{
	stack<char> temp;  
	for (int i = 0; i < S.length(); i++) 
	{
		if (temp.empty())										// If the stack is empty
		 {
			temp.push(S[i]);									// just push the current bracket
		 }
		else if ((temp.top() == '(' && S[i] == ')')    ||   (temp.top() == '{' && S[i] == '}')   ||    (temp.top() == '[' && S[i] == ']'))
		{
			temp.pop();											// If we found any complete pair of bracket then pop
		}
		else
		{
			temp.push(S[i]);
		}
	}
	if (temp.empty()) 
	{
			return true;										// If stack is empty return true
	}	
	return false;
}
int main()
{
	string S = "{()}{}";
	
	if (areBracketsBalanced(S))
		cout << "Balanced";
	else
		cout << "Not Balanced";
}
