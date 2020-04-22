#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
 vector<pair<int,int> > v;
 int sum=0,x;
 for(int i=0;i<5;i++)
 {
  cin>>x;
  sum+=x;
  int p=0;
  for(int j=0;j<v.size();j++)
  {
   if(v[j].first==x)
   {
    v[j].second++;
    p=1;
    break;
    } 
  }
  if(p==0)
  v.push_back(make_pair(x,1));
 }
 sort(v.begin(),v.end());
 int maxs=0;
 for(int i=v.size()-1;i>=0;i--)
 {
  if(v[i].second>=3)
  {
   if(v[i].first*3>maxs)
   {
    maxs=v[i].first*3;
    continue;
   }
  }
  if(v[i].second==2)
  {
   if(v[i].first*2>maxs)
   {
    maxs=v[i].first*2;
   }
  }
 }
 cout<<sum-maxs;
}