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
node* reverse(node* &head)
{
	node* prevPtr = NULL;
	node* currPtr = head;
	node* nextPtr;
	while(currPtr != NULL)
	{
		nextPtr = currPtr->next;
		currPtr->next = prevPtr;
		prevPtr = currPtr;
		currPtr = nextPtr;
	}
	return prevPtr;
}
node* rR(node* &head)                                         // rR = reverse recursive method
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	node* anotherHead = rR(head->next);
	head->next->next = head;
	head->next = NULL;
	return anotherHead;
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
	display(head);
	cout<<endl;
	node* newHead = reverse(head);                 // use rR(head) in place of reverse(head) for recursive method in place if iterative method
	display(newHead);	
}