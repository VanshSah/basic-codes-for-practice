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

class queue
{
	node* front;
	node* rear;
	public:
		queue()
		{
			front = NULL;
			rear = NULL;
		}
		
	void push(int x)
	{
		node* n = new node(x);
		if(front == NULL)
		{
			rear = n;
			front = n;
			return;
		}
		rear->next = n;
		rear = n;
    }
	
	void pop()
	{
		if(front == NULL)
		{
			cout<<"queue underflow ";
			return;
		}
		node* toDelete = front;
		front = front->next;
		delete toDelete;
	}
	
	int peek()
	{
		if(front == NULL)
		{
			cout<<"no element in queue ";
			return -1;
		}
		return front->data;
	}
	
	bool empty()
	{
		if(front == NULL)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.peek()<<endl;
	q.pop();
	
	cout<<q.empty();
}