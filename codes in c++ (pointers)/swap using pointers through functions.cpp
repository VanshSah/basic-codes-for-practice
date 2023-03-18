#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 2;
	int b = 3;
	int *ptr1 = &a;            // swap done by giving address (way of swapping through address)
	int *ptr2 = &b;
	swap(*ptr1,*ptr2);         // swap by { Call by Reference }
	cout<<a<<" "<<b<<endl;
	return 0;
}