#include<bits/stdc++.h>
using namespace std;
bool Superset(string s, int i, string curr)          // if we use void then ate nd cout on main funtion willl gives error
 {
  if (i == s.length())
   {
    cout << curr << endl;
    return 1;
  }
  Superset(s, i+1, curr);
  Superset(s, i+1, curr + s[i]);
  return true;
}

int main() 
{
 cout<<"sets are -"<<Superset("abc", 0, "");
}
