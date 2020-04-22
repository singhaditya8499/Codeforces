#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n,a,b;
 cin>>n>>a>>b;
 if(b<0)
 {
  int tmp=a;
  int left=abs(b)%n;
  if(tmp>left)
  {
   cout<<tmp-left;
  }
  else
  {
   left=left-tmp;
   cout<<n-left;
  }
 }
 else
 {
  int tmp=n-a;
  int left=b%n;
  if(tmp>=left)
  {
   cout<<left+a;
  }
  else
  {
   left=left-tmp;
   cout<<left;
  }
 }
}