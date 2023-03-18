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



void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
	{
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}



node* mR(node* &head1, node* &head2)                     // mR = merge recursion
{
	if(head1 == NULL)
	{
		return head2;
	}
	if(head2 == NULL)
	{
		return head1;
	}
	node* result;
	if(head1->data < head2->data)
	{
		result = head1;
		result->next = mR(head1->next, head2);
	}
	else
	{
		result = head2;
		result->next = mR(head1, head2->next);
	}
	return result;
}



node* merge(node* &head1, node* &head2)                        // iterative method
{
	node* ptr1 = head1;
	node* ptr2 = head2;
	node* dummyNode = new node(-1);
	node* ptr3 = dummyNode;
	while(ptr1 != NULL && ptr2 != NULL)
	{
		if(ptr1->data < ptr2->data)
		{
			ptr3->next = ptr1;
			ptr1 = ptr1->next;
		}
		else
		{
			ptr3->next = ptr2;
			ptr2 = ptr2->next;
		}
		ptr3 = ptr3->next;
	}
{
while(ptr1 != NULL)
{
	ptr3->next = ptr1;
	ptr1 = ptr1->next;
	ptr3 = ptr3->next;
}
while(ptr2 != NULL)
{
	ptr3->next = ptr2;
	ptr2 = ptr2->next;
	ptr3 = ptr3->next;
}
return dummyNode->next;
}
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
	node* head1 = NULL;
	node* head2 = NULL;
	
	int a1[] = {1,4,5,7};
	int a2[] = {2,3,6};
	
	for(int i=0;i<4;i++)
	insertAtTail(head1, a1[i]);

	for(int i=0;i<3;i++)
	insertAtTail(head2, a2[i]);
	
	display(head1);
	
	cout<<endl;
	
	display(head2);
	
	cout<<endl;
	
	node* newHead = merge(head1, head2);                            // in place of merge use mR for recursive output
	display(newHead);
}