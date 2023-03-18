#include<iostream>
using namespace std;
int main()
{ 
	int a = 22;
	int* ptr = &a;               
	cout<<*ptr<<endl;          // for int its increment if for 4 bytes
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;   
	// cout<<*ptr<<endl;   // unable to increase value thats why only giving address
	int b = 20;
	int *ptr2 = &b;
	cout<<*ptr2<<endl;
	//*ptr2++;       // this way dont work
	//cout<<*ptr2<<endl;   // unable to increase value thats why only giving address
	char ch = 'a';
	char *ptr3 = &ch;              // for charater its increment is of 1 byte
	cout<<ptr3<<endl;
	ptr3++;
	cout<<ptr3<<endl;
	return 0;
}