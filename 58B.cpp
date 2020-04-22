#include "bits/stdc++.h"
using namespace std;
 int main()
{
 int n;
 cin>>n;
 vector<int> v;
 v.push_back(n);
 while(n!=1)
 for(int i=n/2;i>=1;i--)
 {
  if(n%i==0)
  {
   v.push_back(i);
   n=i;;
   //cout<<"hello";
   break;
  }
 }
 sort(v.begin(),v.end());
 for(int i=v.size()-1;i>=0;i--)
 cout<<v[i]<<" ";
}