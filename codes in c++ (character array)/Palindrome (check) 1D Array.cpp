#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n+1];
	cin>>a;
	bool check = 1;
	for(int i=0;i<n;i++)
	{
		if(a[i] != a[n-1-i])                     // here i used in n-1 means it can repeatedly check like first elemnet check with last then second with second last then third with third last and go-on
		{
			check = 0;
			break;
		}	
	}
	if(check == true)
	cout<<"word is a palindrome"<<endl;          // input = 5 then mohit or nitn (dono mai se koi bhi lele)
	else
	cout<<"word is not a palindrome"<<endl;         // palindrome means whose repeat is same -->> example nitin the reverse of nitin is nitin
	return 0;
}