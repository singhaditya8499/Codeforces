#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<long long int> e,o;
 for(int i=0;i<n;i++)
 {
  long long int x;
  cin>>x;
  if(x%2==0)
   e.push_back(x);
  else
   o.push_back(x);
 }
 sort(e.begin(),e.end());
 sort(o.begin(),o.end());
 long long int ans=0;
 if(o.size()%2==0)
 {
  for(int i=0;i<o.size();i++)
   ans=ans+o[i];
  for(int i=0;i<e.size();i++)
   ans=ans+e[i];
 }
 else
 {
  for(int i=o.size()-1;i>=1;i--)
   ans=ans+o[i];
  for(int i=e.size()-1;i>=0;i--)
   ans=ans+e[i];
 }
 cout<<ans;
}