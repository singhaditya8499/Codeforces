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
//#include<bits/stdc++.h>
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
 int n;
 cin>>n;
 long arr[n];
 int cntp=0,cntn=0,z=0;
 vector<int> v[3];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  if(arr[i]==0)
  {
   z++;
   v[0].push_back(i);
  }
  else if(arr[i]>0)
  {
   cntp++;
   v[1].push_back(i);
  }
  else
  {
   cntn++;
   v[2].push_back(i);
  }
 }
 vector<int> final,final1;
 for(int i=0;i<v[1].size();i++)
 final.push_back(v[1][i]);
 long mm=-1000000001,ind=-2;
 //cout<<"00";
 if(cntn>0)
 {
  for(int i=0;i<v[2].size();i++)
  {
   if(arr[v[2][i]]>mm)
   {
    mm=arr[v[2][i]];
    ind=v[2][i];
   }
  }
  if(cntn%2==0)
  {
   for(int i=0;i<v[2].size();i++)
   {
    final.push_back(v[2][i]);
   }
  }
  else
  {
   for(int i=0;i<v[2].size();i++)
   {
    if(v[2][i]==ind)
     continue;
    else
     final.push_back(v[2][i]);
   }
  }
 }
  if(ind!=-2&&cntn%2==1)
  final1.push_back(ind);
 for(int i=0;i<v[0].size();i++)
  final1.push_back(v[0][i]);
 sort(final.begin(),final.end());
 sort(final1.begin(),final1.end());
 if(final.size()>0)
 for(int i=0;i<final.size()-1;i++)
  cout<<1<<" "<<final[i]+1<<" "<<final[final.size()-1]+1<<"\n";
 //cout<<final1.size()<<" ";
 if(final1.size()>0)
 {
  for(int i=0;i<final1.size()-1;i++)
   cout<<1<<" "<<final1[i]+1<<" "<<final1[final1.size()-1]+1<<"\n";
  if(final.size()>0)
  cout<<2<<" "<<final1[final1.size()-1]+1<<"\n";
 }
}