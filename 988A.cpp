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
 int n,k;
 cin>>n>>k;
 set<int> present;
 vector<int> index;
 for(int i=0;i<n;i++)
 {
  int x;
  cin>>x;
  if(present.find(x)==present.end())
  {
   index.push_back(i+1);
   present.insert(x);
  }
 }
 if(index.size()<k)
  cout<<"NO\n";
 else
 {
  cout<<"YES\n";
  for(int i=0;i<k;i++)
   cout<<index[i]<<" ";
  cout<<endl;
 }
 return 0;
}