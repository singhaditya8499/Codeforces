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
    int n;
    cin>>n;
    p points[n];
    ll maxx=-1,maxy=-1;
    for(int i=0;i<n;i++)
    {
     cin>>points[i].x>>points[i].y;
     maxx=max(maxx,points[i].x+points[i].y);
     maxy=max(maxy,points[i].x+points[i].y);
    }
    cout<<max(maxx,maxy)<<"\n";
    }