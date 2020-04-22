#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
 int main()
{
 int n;
 vector<int> v;
 cin>>n;
 string s;
 cin>>s;
 int ans=0,cur=0;
 for(int i=0;i<n;i++)
 {
  //cout<<cur<<" ";
  if(s[i]=='B')
   cur++;
  else
  {
   if(s[i]=='W'&&cur>0)
   {
    ans++;
    v.push_back(cur);
    cur=0;
   }
  }
 }
 if(cur>0)
 {
     ans++;
     v.push_back(cur);
 }
 cout<<ans<<endl;
 for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
 return 0;
}