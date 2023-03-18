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

int calH(node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	return max(calH(root->left), calH(root->right)) + 1;
}

int calD(node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int lH = calH(root->left);
	int rH = calH(root->right);
	int currD = lH + rH + 1;
	int lD = calD(root->left);
	int rD = calD(root->right);
	return max(currD, max(lD, rD));
}

int main()
{
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	
	cout<<calD(root);
}