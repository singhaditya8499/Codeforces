#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include<ctime>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
 if(a.first.first!=b.first.first)
 return a.first.first<b.first.first;
  return a.second<b.second;
}
int main()
{
 string s;
 cin>>s;
 bool write[s.length()];
 memset(write,0,sizeof write);
 for(int i=1;i<s.length();i++)
 {
  if(s[i]=='a')
  {
   write[i-1]^=1;
   write[i]=1;
  }
 }
 for(int i=0;i<s.length();i++)
  cout<<write[i]<<" ";
 cout<<endl;
}