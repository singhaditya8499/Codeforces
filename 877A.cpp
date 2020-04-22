#include <bits/stdc++.h>
# define pb push_back
using namespace std;
int main()
{
 int cnt = 0;
 string s;
 cin >> s;
 vector<string> v;
 v.pb("Danil");
 v.pb("Olya");
 v.pb("Slava");
 v.pb("Ann");
 v.pb("Nikita");
 for(auto &str : v)
 {
  int i = 0;
  int n = str.length();
  for(auto &c : s)
  {
   if(c == str[i])
    i++;
   else
    i = (c == str[0]);
   if(i == n)
   {
    cnt++;
    i = 0;
   }
  }
 }
 if(cnt == 1)
  cout << "YES" << endl;
 else
  cout << "NO" << endl;
 return 0;
}