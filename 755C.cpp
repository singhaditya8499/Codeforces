#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
int find_grp(int x,int grp[])
{
 if(x==grp[x])
  return x;
 return grp[x]=find_grp(grp[x],grp);
}
void merge(int x,int y,int grp[])
{
 int a=find_grp(x,grp);
 int b=find_grp(y,grp);
 grp[a]=b;
}
int main()
{
 int n;
 cin>>n;
 int arr[n+1];
 for(int i=0;i<n;i++)
  cin>>arr[i+1];
 int grp[n+1];
 for(int i=0;i<=n;i++)
  grp[i]=i;
 for(int i=1;i<=n;i++)
 {
  merge(i,arr[i],grp);
 }
 set<int> s;
 for(int i=1;i<=n;i++)
  s.insert(find_grp(i,grp));
 cout<<s.size();
}