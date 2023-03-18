#include<iostream>
using namespace std;
int main()
{
	char z;
	cout<<"input the charcter = ";
	cin>>z;
	switch(z)                    // switch use to resolve [if/else] and direct compare all
	{
		case 'a':
			cout<<"ah"<<endl;        // if we dont use break so it first give what u entered and then display remaining also
			break;
		case 'b':
			cout<<"uh"<<endl;
			break;
		case 'c':
		    cout<<"oh no"<<endl;
		    break;	
		case 'd':
			cout<<"koi na"<<endl;
			break;
		default:
				cout<<"jo hai usi mai se choose kar chomu";
				break;
	}
	return 0;
	
}

