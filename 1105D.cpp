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
 int n,m,p;
 cin>>n>>m>>p;
 ll arr[p];
 for(int i=0;i<p;i++)
  cin>>arr[i];
 string s[n];
 for(int i=0;i<n;i++)
  cin>>s[i];
 queue<pair<int,int> > q[p+1];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   if(s[i][j]>='1'&&s[i][j]<='9')
   {
    q[s[i][j]-'0'].push(make_pair(i,j));
   }
  }
 }
 int pre=0;
 int xx[]={0,0,1,-1};
 int yy[]={1,-1,0,0};
 int cnt=0;
 do{
  cnt=0;
  for(int i=1;i<=p;i++)
  {
   ll spread=arr[i-1];
   pre=1;
   //cout<<spread<<"\n";
   while(spread--&&pre)
   {
    pre=0;
    int cur=q[i].size();
    while(cur--)
    {
     pair<int,int> pp=q[i].front();
     int x=pp.first;
     int y=pp.second;
     q[i].pop();
     for(int j=0;j<4;j++)
     {
      if(x+xx[j]>=0&&x+xx[j]<n&&y+yy[j]>=0&&y+yy[j]<m&&s[x+xx[j]][y+yy[j]]=='.')
      {
       pre=1;
       s[x+xx[j]][y+yy[j]]=char('0'+i);
       q[i].push(make_pair(x+xx[j],y+yy[j]));
      }
     }
    }
   }
   if(pre==0)
    cnt++;
  }
  // for(int i=0;i<n;i++)
  //  cout<<s[i]<<"\n";
  // cout<<endl;
 }while(cnt!=p);
 int ans[p+1];
 memset(ans,0,sizeof ans);
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   if(s[i][j]!='.')
   {
    ans[s[i][j]-'0']++;
   }
  }
 }
 for(int i=1;i<=p;i++)
  cout<<ans[i]<<" ";
 cout<<endl;
}