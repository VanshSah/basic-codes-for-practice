#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
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
void preOrder(struct node* root)
{
	if(root == NULL)
	{
		return ;
	}
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
int main()
{
	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->right->left = new node(4);
	root->right->right = new node(7);
	preOrder(root);
}