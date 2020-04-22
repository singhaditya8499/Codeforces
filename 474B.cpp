#include<iostream>
#include<utility>
using namespace std;
int bins(pair<int,int> a[],int t,int s,int e)
{
 int m=(s+e)/2;
 if(t>=a[m].first&&a[m].second>=t)
 return m;
 if(t>a[m].second)
 {
  return bins(a,t,m+1,e);
 }
 else
 {
  return bins(a,t,s,m);
 }
}
int main()
{
 int n;
 cin>>n;
 pair<int,int> a[n+1];
 long int tmp=0;
 for(int i=1;i<=n;i++)
 {
  int x;
  cin>>x;
  a[i].first=tmp+1;
  tmp+=x;
  a[i].second=tmp;
 }
 int q;
 cin>>q;
 while(q--)
 {
  int t;
  cin>>t;
  cout<<bins(a,t,1,n)<<endl;
 }
 return 0;
}