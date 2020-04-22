#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 bool isvowel(char c)
{
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  return true;
 return false;
}
 int main()
{
    string a,b;
    cin>>a>>b;
    if(a.length()!=b.length())
    {
     cout<<"No\n";
     return 0;
    }
    int ans=1;
    for(int i=0;i<a.length();i++)
    {
     if((isvowel(a[i])&&!isvowel(b[i]))||(isvowel(b[i])&&!isvowel(a[i])))
     {
      ans=0;
      break;
     }
    }
    if(ans)
     cout<<"Yes\n";
    else
     cout<<"No\n";
}