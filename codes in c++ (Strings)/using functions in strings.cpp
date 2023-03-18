#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1 = "madanmohan";
	str1.erase(5,3);             // 5 tells from where we have to erase (position) and 3 tells how much letters we have to delete
	cout<<str1<<endl;
	
	cout<<"\n";
	
	string str2 = "Ultra Instinct";          // function used to find any alphabets on strings
//	str2.find("Ins");                          // this way it doesnt woek
	cout<<str2.find("Ins")<<endl;         // doesnt count the space between Ultra and Instinct
	
	cout<<"\n";
	
	string str3 = "Mastered Instinct";      // function to insert string or alphabet between any string
	cout<<str3.insert(8," Ultra")<<endl;
	
	cout<<"\n";
	
	string str4 = "ram raheem";     // funtion for counting
	cout<<str4.size()<<endl;             // space also counts  [also we can use length() instead of size]
	
	cout<<"\n";
	
	for(int i=0;i<str4.size();i++)      // to visit every alphabet of string [traverse]
	cout<<str4[i]<<endl;
	
	cout<<"\n";
	
	string str5 = "maha maheem bheem";       // funtion for take sub-string from string 
	cout<<str5.substr(5,6)<<endl;        //  5 for position from where we have to take and 6 total no of alphabets we have to output as sub-string
	
	return 0;
}