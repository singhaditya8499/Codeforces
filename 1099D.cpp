#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
  ll hoho(int x,vector<int> v[],ll s[])
{
 if(v[x].size()==0)
  return 0;
 ll sum=INT_MAX;
 for(int i=0;i<v[x].size();i++)
 {
  sum=min(sum,s[v[x][i]]);
 }
 return sum;
}
int main()
{
 int n;
 cin>>n;
 vector<int> v[n+1];
 ll parent[n+1];
 for(int i=2;i<=n;i++)
 {
  cin>>parent[i];
  v[parent[i]].push_back(i);
 }
 ll s[n+1];
 for(int i=1;i<=n;i++)
  cin>>s[i];
  ll sum=s[1];
 for(int i=2;i<=n;i++)
 {
  if(s[i]==-1)
  {
   s[i]=max(s[parent[i]],hoho(i,v,s));
   sum+=s[i]-s[parent[i]];
  }
  else
  {
   if(s[i]<s[parent[i]])
   {
    cout<<-1;
    return 0;
   }
   sum+=s[i]-s[parent[i]];
  }
 }
 cout<<sum;
}