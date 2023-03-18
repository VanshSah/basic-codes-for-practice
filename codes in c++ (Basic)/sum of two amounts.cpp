#include<iostream>
using namespace std;
int main()
{
	int amount1;
	// cin>>"amount 1 = ">>amount1;  // cant declare output presentation(enter the amount) in [cin]
	cout<<"enter the amount 1 = \n"; // use of (\n)
	cin>>amount1;

	int amount2;
	cout<<"enter the amount 2 = ";  // no use of (\n)
	cin>>amount2;
	
	int sum = amount1+amount2;
	cout<<"total amount = "<<sum<<endl;
}
