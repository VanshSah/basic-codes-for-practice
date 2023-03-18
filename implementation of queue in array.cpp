#include<iostream>
using namespace std;
#define n 20
class queue
{
	int* a;
	int front;
	int rear;
	public:
		queue()
		{
			a = new int[n];
			front = -1;
			rear = -1;
		}
	
	void push(int x)
	{
		if(rear== n-1)
		{
			cout<<"queue overflow ";
			return;
		}
		rear++;
		a[rear] = x;
		
		if(front == -1)           // no value at start
		{
			front++;             // so move forward
		}
	}	
	
	void pop()
	{
		if(front == -1 || front > rear)
		{
			cout<<"no Elements are present ";
			return;
		}
		front++;
	}
	
	int peek()
	{
		if(front == -1 || front > rear)
		{
			cout<<"no elements are present ";
			return -1;
		}
		return a[front];
	}
	
	bool empty()
	{
		if(front == -1 || front > rear)
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
	
	cout<<q.empty();
}