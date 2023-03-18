#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int val)
		{
			data = val;
			next = NULL;
		}
};
void deleteNode(node* &head, int val)
{
	if(head == NULL)
	{
		return ;
	}
	node* temp = head;
	while(temp->next->data != val)
	{
		temp = temp->next;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	delete toDelete;
}
void deleteAtHead(node* &head)          // ise chalane ke liye modify karna parega na meri jaan
{
	if(head->next == NULL)
	{
		deleteAtHead(head);
		return ;
	}
	node* toDelete = head;
	head = head->next;
	delete toDelete;
}
void display(node* head)
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}
int main()
{
	node* head = new node(1);
	node* second = new node(2);
	node* third = new node(3);
	node* fourth = new node(4);
	head->next = second;
	second->next = third;
	third->next = fourth;
	deleteNode(head, 3);               // yaha pe hoga change 3 delete kardere isliye 2nd wala output mai bhi 3 hat jara hai
	display(head);
	cout<<endl;
	deleteAtHead(head);                            // ye
	display(head);
}