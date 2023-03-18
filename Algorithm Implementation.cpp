#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}


void print(int x)
{
	cout<<x<<" ";
}


bool positive(int x)
{
	return x>0;
}


bool negative(int x)
{
	return x<0; 	
} 


int main()
{
vector<int> v{3,2,5,1,1,-2,60}, v1(10);
sort(v.begin(), v.end());
for_each(v.begin(), v.end(), print);

cout<<endl;

sort(v.begin(), v.end(), compare);
for(auto it = v.begin(); it != v.end(); it++)
{
	cout<<*it<<" ";
}

cout<<endl;

sort(v.begin(), v.begin()+3);
for_each(v.begin(), v.end(), print);

cout<<endl;

cout<<*max_element(v.begin(), v.end());
//                   this will give eroor as well as return  only index rather then value [cout<<max_element(v.begin(), v.end());]
cout<<endl;
//                   giving error               [cout<<*find(v.begin(), v.end(), 3) - v.begin();]
cout << distance(v.begin(), find(v.begin(), v.end(), 3));

cout<<endl;

cout<<*find(v.begin(), v.end(), -2);

cout<<endl;

cout<<count(v.begin(), v.end(), 1);

cout<<endl;

auto itUb = upper_bound(v.begin(), v.end(), 2);              // ni aya samaj bhai
cout<<*itUb;

cout<<endl;

next_permutation(v.begin(), v.end());
for_each(v.begin(), v.end(), print);

cout<<endl;

if(all_of(v.begin(), v.end(), positive))
{
	cout<<"positive number ";
}
else
{
	cout<<"Not a positive number ";
}

cout<<endl;

if(none_of(v.begin(), v.end(), negative))
{
	cout<<"No element is negative ";
}
else
{
	cout<<"Atleast one element is negative ";
}

cout<<endl;

iota(v.begin(), v.end(), 5);
for_each(v.begin(), v.end(), print);
}