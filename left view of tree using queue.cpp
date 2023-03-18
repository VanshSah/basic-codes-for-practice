#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data;
	node* left, * right;
	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void leftView(node* root)
{
	if(root == NULL)
	{
		return;
	}
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		int n = q.size();
		for(int i=1;i<=n;i++)
		{
			node* temp = q.front();
			q.pop();
			if(i == 1)
			{
				cout<<temp->data<<" ";
			}
			if(temp->left != NULL)
			{
				q.push(temp->left);
			}
			if(temp->right != NULL)
			{
				q.push(temp->right);
			}
		}
	}
}

int main()
{
	node* root = new node(4);
	root->left = new node(7);
	root->right = new node(6);
	root->left->left = new node(8);
	root->left->right = new node(9);
	
	leftView(root);
}