#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
using namespace std;
//**************//
typedef unsigned long long ull;
//**************//
bool chk(string s[],int x,int y,int n,int m)
{
 if(x+1<n)
 {
  if(s[x+1][y]=='W')
   return false;
  else if(s[x+1][y]=='.')
   s[x+1][y]='D';
 }
 if(x-1>=0)
 {
  if(s[x-1][y]=='W')
   return false;
  else if(s[x-1][y]=='.')
   s[x-1][y]='D';
 }
 if(y+1<m)
 {
  if(s[x][y+1]=='W')
   return false;
  else if(s[x][y+1]=='.')
   s[x][y+1]='D';
 }
 if(y-1>=0)
 {
  if(s[x][y-1]=='W')
   return false;
  else if(s[x][y-1]=='.')
   s[x][y-1]='D';
 }
  return true;
}
int cnt[305];
int main()
{
 int n,m;
 cin>>n>>m;
 string s[n];
 for(int i=0;i<n;i++)
  cin>>s[i];
 int ans=1;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   if(s[i][j]=='S')
   {
    if(!chk(s,i,j,n,m))
    {
     ans=0;
     break;
    }
   }
  }
  if(!ans)
   break;
 }
 if(!ans)
  cout<<"No\n";
 else
 {
  cout<<"Yes\n";
  for(int i=0;i<n;i++)
  cout<<s[i]<<"\n";
 }
 }