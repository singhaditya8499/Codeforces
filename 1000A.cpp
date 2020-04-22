#include<vector>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 map<string,int> m;
 for(int i=0;i<n;i++)
 {
  string s;
  cin>>s;
  m[s]++;
 }
 int ans=0;
 for(int i=0;i<n;i++)
 {
  string s;
  cin>>s;
  if(m[s]>0)
  {
   m[s]--;
  }
  else
  {
   ans++;
  }
 }
 cout<<ans;
}