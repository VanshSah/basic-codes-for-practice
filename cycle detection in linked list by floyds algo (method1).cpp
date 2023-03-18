#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node (int val)
		{
			data = val;
			next = NULL;
		}
};
bool detectCycle(node* &head)
{
	node* slow = head;
	node* fast = head;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow)
		{
			return true;
		}
	}
	return false;
}
void display(node* head)
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
	}
	temp = temp->next;
}
int main()
{
	node* head = new node(1);
	node* second = new node(2);
	node* third = new node(3);
	node* fourth = new node(4);
	node* fifth = new node(5);
	node* sixth = new node(6);
	node* seventh = new node(7);
	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = sixth;
	sixth->next = seventh;
	seventh->next = third;
	cout<<detectCycle(head);
	//display(head);   
}