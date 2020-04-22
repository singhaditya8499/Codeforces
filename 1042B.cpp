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
 unordered_map<string,ull> m;
 for(int i=0;i<n;i++)
 {
  ull x;
  cin>>x;
  string s;
  cin>>s;
  sort(s.begin(),s.end());
  if(m.find(s)==m.end())
   m[s]=x;
  else
   m[s]=min(m[s],x);
 } 
 ull ans=1000000000;
 if(m.find("A")!=m.end()&&m.find("B")!=m.end()&&m.find("C")!=m.end())
  ans=min(ans,m["A"]+m["B"]+m["C"]);
 if(m.find("A")!=m.end()&&m.find("BC")!=m.end())
  ans=min(ans,m["A"]+m["BC"]);
 if(m.find("B")!=m.end()&&m.find("AC")!=m.end())
  ans=min(ans,m["B"]+m["AC"]);
 if(m.find("C")!=m.end()&&m.find("AB")!=m.end())
  ans=min(ans,m["C"]+m["AB"]);
 if(m.find("ABC")!=m.end())
  ans=min(ans,m["ABC"]);
 if(m.find("AB")!=m.end()&&m.find("BC")!=m.end())
  ans=min(ans,m["AB"]+m["BC"]);
 if(m.find("BC")!=m.end()&&m.find("AC")!=m.end())
  ans=min(ans,m["BC"]+m["AC"]);
 if(m.find("AB")!=m.end()&&m.find("AC")!=m.end())
  ans=min(ans,m["AB"]+m["AC"]);
 if(ans==1000000000)
  cout<<-1;
 else
  cout<<ans;
}