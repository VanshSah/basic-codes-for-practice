#include<iostream>
using namespace std;
int main()
{
	int x = 100;
	int *ptr1 = &x;
	cout<<*ptr1<<endl;
	int **y=&ptr1;
	cout<<*y<<endl;             // ptr1 and y are the pointers 
	cout<<**y<<endl;
	return 0;
}