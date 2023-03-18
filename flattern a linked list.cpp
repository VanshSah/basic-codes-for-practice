#include<iostream>
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

void flattern(node* root)
{
	if(root == NULL || (root->left == NULL) && (root->right == NULL))
	{
		return ;
	}
	if(root->left != NULL)
	{
		flattern(root->left);
		node* temp = root->right;
		root->right = root->left;
		root->left = NULL;
		node* t = root->right;
		while(t->right != NULL)
		{
			t = t->right;
		}
		t->right = temp;
	}
	flattern(root->right);
}

void inorderPrint(node* root)
{
	if(root == NULL)
	{
		return;
	}
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}

int main()
{
	node* root = new node(4);
	root->left = new node(9);
	root->right = new node(5);
	root->left->left = new node(1);
	root->left->right = new node(3);
	root->right->right = new node(6);
	flattern(root);
	inorderPrint(root);
}
	
