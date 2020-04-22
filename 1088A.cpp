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
    cin>>x;
    if(x==1)
     cout<<-1<<"\n";
    else
    {
     cout<<x<<" "<<x<<"\n";
    }
    }