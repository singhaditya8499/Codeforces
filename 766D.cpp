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
int fin(int x,int arr[])
{
 if(x==arr[x])
  return x;
 return arr[x]=fin(arr[x],arr);
}
void uni(int a,int b,int arr[])
{
 int x=fin(a,arr);
 int y=fin(b,arr);
 arr[x]=y;
}
int main()
{
 int n,m,q;
 cin>>n>>m>>q;
 unordered_map<string,int> ma;
 int arr[2*n+100];
 for(int i=1;i<2*n+100;i++)
  arr[i]=i;
 for(int i=1;i<=n;i++)
 {
  string s;
  cin>>s;
  ma[s]=i;
 }
 for(int i=0;i<m;i++)
 {
  int ch;
  string a,b;
  cin>>ch>>a>>b;
  int x=ma[a];
  int y=ma[b];
  if(ch==1)
  {
   if(fin(x,arr)==fin(y+n,arr))
   {
    cout<<"NO\n";
    continue;
   }
   uni(x,y,arr);
   uni(x+n,y+n,arr);
   cout<<"YES\n";
  }
  else
  {
   if(fin(x,arr)==fin(y,arr))
   {
    cout<<"NO\n";
    continue;
   }
   uni(x,y+n,arr);
   uni(x+n,y,arr);
   cout<<"YES\n";
  }
 }
 while(q--)
 {
  string a,b;
  cin>>a>>b;
  if(fin(ma[a],arr)==fin(ma[b],arr))
   cout<<1<<"\n";
  else if(fin(ma[a],arr)==fin(ma[b]+n,arr))
   cout<<2<<"\n";
  else
   cout<<3<<"\n";
 }
}