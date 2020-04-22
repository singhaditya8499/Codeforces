#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
#include<numeric> //iota
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 ull ggcd(ull a,ull b)
{
 if(b==0)
  return a;
 return ggcd(b,a%b);
}
int main()
{
 ull n,m,d;
 cin>>n>>m>>d;
 pair<ull,ull> arr[n];
 ull ans[n];
 for(int i=0;i<n;i++)
  {
   cin>>arr[i].first;
   arr[i].second=i;
  }
 sort(arr,arr+n);
 priority_queue<pair<ull,ull> > pq;
 ull cnt=2;
 pq.push(make_pair(arr[n-1].first,1));
 ans[arr[n-1].second]=1;
 for(int i=n-2;i>=0;i--)
 {
  pair<ull,ull> x=pq.top();
  pq.pop();
  if(x.first-arr[i].first-1>=d)
  {
   pq.push(make_pair(arr[i].first,x.second));
   ans[arr[i].second]=x.second;
  }
  else
  {
   pq.push(x);
   pq.push(make_pair(arr[i].first,cnt++));
   ans[arr[i].second]=cnt-1;
  }
 }
 cout<<pq.size()<<"\n";
 for(int i=0;i<n;i++)
  cout<<ans[i]<<" ";
}