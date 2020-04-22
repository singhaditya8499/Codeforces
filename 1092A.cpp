//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
 bool cmp(int a,int b)
{
 return a>b;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int q;
 cin>>q;
 while(q--)
 {
  int n,k;
  cin>>n>>k;
  int all=n/k,rem=n%k;
  string ans;
    for(int i=0;i<k-1;i++)
  {
   int x=all;
   while(x--)
   ans=ans+char('a'+i);
  }
  for(int i=0;i<all+rem;i++)
   ans=ans+char('a'+k-1);
  cout<<ans<<"\n";
 }
 return 0;
}