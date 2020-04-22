#include <bits/stdc++.h>
# define pb push_back
using namespace std;
int main()
{
 int n;
 cin>>n;
 string s[n];
 for(int i=0;i<n;i++)
 cin>>s[i];
 int ans=1e6;
 for(int i=0;i<n;i++)
 {
  int tmp=0;
  string ss;
  for(int j=0;j<n;j++)
  {
   ss=s[j]+s[j];
   if(ss.find(s[i])==-1)
   {
    cout<<-1;
    return 0;
   }
   tmp+=ss.find(s[i]);
  }
  ans=min(ans,tmp);
 }
 cout<<ans;
 return 0;
}