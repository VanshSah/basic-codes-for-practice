#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
	public:
	node (int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void pLo(node* root)								//pLo = print level order					// Iterative method to find height of Binary Tree
{
	if (root == NULL)
	{
		return;
	}
	
	queue<node*> q;							// Create an empty queue for level order traversal
	
	q.push(root);								// Enqueue Root and initialize height or we say first node or current node
	
	while (q.empty() == false) 
	{
		node* temp = q.front();					// Print front of queue and remove it from queue
		cout << temp->data << " ";
		q.pop();
		
		if (temp->left != NULL)						// inserting left child in queue
			q.push(temp->left);

		if (temp->right != NULL)					// inserting right child in queue
			q.push(temp->right);
	}
}

int main()
{
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);

	cout << "Level Order traversal of binary tree is "<<endl;
	pLo(root);                                           
}
