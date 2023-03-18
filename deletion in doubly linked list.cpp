#include<iostream>
using namespace std;
class node
{
	public:            // if not declare public so compiler consider it as private automatically
	int data;
	node* next;
	node* prev;
	node (int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};
void deleteAtHead(node* &head)
{
	if(head == NULL)
	{
		return;
	}
	node* toDelete = head;
	head = head->next;
	if(head != NULL)
	{
	head->prev = NULL;
    }
	delete toDelete;
}
void deletion(node* &head, int pos)
{
	if(pos == 1)
	{
		deleteAtHead(head);
		return;
	}
	node* temp = head;
	int count = 1;
	while(temp != NULL && count != pos)
	{
		temp = temp->next;
		count++;
	}
	if(temp == NULL)
	{
		cout<<"invalid position";
		return;
	}
	temp->prev->next = temp->next;
	if(temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	delete temp;
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
	second->prev = head;
	second->next = third;
	third->prev = second;
	third->next = fourth;
	fourth->prev = third;
	display(head);
	cout<<endl;
	deletion(head, 1);              // this is for at head deletion and in place of 1, use 3 , means 3rd pos element will delete
	display(head);
}