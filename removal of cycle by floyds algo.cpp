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
void makeCycle(node* &head, int pos)
{
	node* temp = head;
	node* startNode;
	int count = 1;
	while(temp->next != NULL)
	{
		if(count == pos)
		{
			startNode = temp;
		}
		temp = temp->next;
		count++ ;
	} 
	temp->next = startNode;
}
void removeCycle(node* &head)
{
	node* slow = head;
	node* fast = head;
	do
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	while(slow != fast);
	{
		fast = head;
    }
	while(slow->next != fast->next)
	{
		slow = slow->next;
		fast = fast->next;
	}
	slow->next = NULL;
}
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
	
	makeCycle(head, 3);           
	cout<<detectCycle(head);
	
	cout<<endl;
	
	removeCycle(head);
	cout<<detectCycle(head);
}