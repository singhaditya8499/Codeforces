//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
int find(int x,int father[])
{
 if(father[x]==x)
  return x;
 return father[x]=find(father[x],father);
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 int k;
 cin>>k;
 ll arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 string s;
 cin>>s;
 char c;
 ll ans=0;
 //cout<<"start\n";
 for(int i=0;i<n;)
 {
  int j=i;
  c=s[i];
  priority_queue<ll> pq;
  //cout<<i<<"-";
  while(j<n&&s[j]==c)
  {
   pq.push(arr[j]);
   //cout<<arr[j]<<" ";
   j++;
  }
  int tmp=k;
  while(!pq.empty()&&tmp--)
  {
   ans+=pq.top();
   //cout<<pq.top()<<"\n";
   pq.pop();
  }
  i=j;
 }
 cout<<ans<<"\n";
}