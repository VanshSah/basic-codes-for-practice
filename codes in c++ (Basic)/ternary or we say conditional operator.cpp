#include<iostream>
using namespace std;
int main()
/*          {                       
	int a=10;                                   // [basic] / [level 1] 
	int b=5;
	int c = a>b?a*2:b*2;
	cout<<c;
}
                   */

{
	int x,y;                                       //[] level 2]
	cout<<"enter x = ";
	cin>>x;
	cout<<"enter y = ";
	cin>>y;
	int c;
//	if(c=x>y?x*10:x/10)     // or (next line)
	(c=x>y?x*10:x/10);                        //          no need of [if] , but we can use also (gives no error)
	cout<<"result = "<<c<<endl;
	return 0;
}
