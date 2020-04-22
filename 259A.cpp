#include "bits/stdc++.h"
using namespace std;
 int main()
{
 string a="BWBWBWBW";
 string b="WBWBWBWB";
 int ans=1;
 for(int i=0;i<8;i++)
 {
  string tmp;
  cin>>tmp;
  if(tmp!=a&&tmp!=b)
  {
   ans=0;
  }
 }
 cout<<((ans)?"YES\n":"NO\n");
}