#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

int max(node* root)
{
	if(root == NULL)
	{
		return INT_MIN;
	}
	int Ans = root->data;
    int lAns = max(root->left);
    int rAns = max(root->right);
    if (lAns > Ans)
        Ans = lAns;
    if (rAns > Ans)
        Ans = rAns;
    return Ans;
}

int main()
{
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(30);
	root->left->left = new node(4);
	root->left->right = new node(5);
	
	cout<<max(root);
}