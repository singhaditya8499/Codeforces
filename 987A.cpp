#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 bool isvowel(char c)
{
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  return true;
 return false;
}
 struct p{
 ll x,y;
};
bool cmpx(p a,p b)
{
 return a.x<b.x;
}
bool cmpy(p a,p b)
{
 return a.y<b.y;
}
 int main()
{
    int x;
    string s[]={"purple", "green", "blue", "orange", "red", "yellow"};
    string ans[]={"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    int n;
    cin>>n;
    int aa=6;
    for(int i=0;i<n;i++)
    {
     string a;
     cin>>a;
     for(int j=0;j<6;j++)
     {
      if(a==s[j])
      {
       s[j]="ii";
       aa--;
      }
     }
    }
    cout<<aa<<"\n";
    for(int i=0;i<6;i++)
    {
     if(s[i]!="ii")
      cout<<ans[i]<<"\n";
    }
}