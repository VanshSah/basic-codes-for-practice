#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();      // for input
	char a[n+1];
    cin.getline(a, n);  // getline resolve the problem of space and store space also in single sentence
	cin.ignore();  // to clear the buffer 
	int i=0;
	int currLen=0,maxLen=0;
	while(1)    // 1 means true
	{
		if(a[i]==' ' || a[i]=='\0')    // a[i]='  ' used for space and a[i]=='\0' used for null character
		{
			if(currLen>maxLen)
			{ 
				maxLen=currLen;      // updating
			}
			currLen=0;
		}
		else
		currLen++;
		if(a[i]=='\0')
			break;
			i++;
	}
	cout<<maxLen<<endl;
	return 0;
}