#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
 int main()
{
 long long int a;
 vector<int> v;
 cin>>a;
 while(a)
 {
  v.push_back(a%10);
  a=a/10;
 }
 for(int i=0;i<v.size()-1;i++)
 {
  if(v[i]>=5)
   v[i]=9-v[i];
 }
 if(v[v.size()-1]!=9&&v[v.size()-1]>=5)
 {
  v[v.size()-1]=9-v[v.size()-1];
 }
 if(v[v.size()-1]==0)
 {
  v[v.size()-1]=9;
 }
 for(int i=v.size()-1;i>=0;i--)
 {
  cout<<v[i];
 }
 return 0;
}