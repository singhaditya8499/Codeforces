#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
 int main()
{
 string a;
 cin>>a;
 int f=0,s=0;
 for(int i=0;i<a.length()-1;i++)
 {
  if(a[i]=='A'&&a[i+1]=='B'&&f!=1)
  {
   f=1;
   i=i+1;
   continue;
  }
  if(a[i]=='B'&&a[i+1]=='A'&&s!=1)
  {
   s=1;
   i=i+1;
   continue;
  }
 }
 if(f==1&&s==1)
 {
     cout<<"YES";
     return 0;
 }
 //cout<<f<<" "<<s<<endl;
 f=s=0;
 for(int i=a.length()-1;i>=1;i--)
 {
  if(a[i]=='A'&&a[i-1]=='B'&&f!=1)
  {
   f=1;
   i=i-1;
   continue;
  }
  if(a[i]=='B'&&a[i-1]=='A'&&s!=1)
  {
   s=1;
   i=i-1;
   continue;
  }
 }
 //cout<<f<<" "<<s;
 if(f==1&&s==1)
  cout<<"YES";
 else
  cout<<"NO";
}