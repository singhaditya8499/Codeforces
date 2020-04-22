#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
 using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 set<int> s;
 for(int i=0;i<m;i++)
 {
  int a,b;
  cin>>a>>b;
  s.insert(a);
  s.insert(b);
 }
 int i=0;
 for(i=1;i<=n;i++)
  if(s.find(i)==s.end())
   break;
 cout<<n-1<<"\n";
 for(int j=1;j<=n;j++)
 {
  if(i==j)
   continue;
  cout<<i<<" "<<j<<"\n";
 }
}