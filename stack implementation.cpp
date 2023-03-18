#include<iostream>
using namespace std;
#define n 100
class stack
{
	int* a;     // a is array
	int top;     // these two declared as private member
	public:
		stack()
		{
			a = new int[n];
			top = -1;
		}

void push(int x)
{
	if(top == n-1)
	{
		cout<<"stack overflow";
		return;
	}
	top++;
	a[top] = x;
}


void pop()
{
	if(top == -1)
	{
		cout<<"no element is present to pop";
		return;
	}
	top--;
}


int Top()
{
	if(top == -1)
	{
		cout<<"no element is present";
		return -1;
	}
	return a[top];
}


bool empty()
{
	return top == -1;
}
};


int main()
{
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	
	cout<<st.Top()<<endl;
	
	st.pop();
	
	cout<<st.Top()<<endl;
	
	st.pop();
	st.pop();
	st.pop();
	
	cout<<endl;
	
	cout<<st.empty();
}