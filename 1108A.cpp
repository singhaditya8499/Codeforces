//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 while(n--)
 {
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  if(x1==x2&&y1==y2)
  {
   cout<<x1<<" "<<y2<<"\n";
  }
  else
  {
   if(x1==x2)
   {
    cout<<y1<<" "<<y2<<"\n";
   }
   else
   {
    if(y1==y2)
    {
     cout<<x1<<" "<<x2<<"\n";
    }
    else
    {
     if(x1==y2)
     {
      cout<<y1<<" "<<x2<<"\n";
     }
     else
     {
      cout<<x1<<" "<<y2<<"\n";
     }
    }
   }
  }
 }
 return 0;
}