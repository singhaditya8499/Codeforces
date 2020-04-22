#include<bits/stdc++.h>
using namespace std;
int main()
{
 long int ma=0,pre=0,x,cnt=0;
 long int n;
 cin>>n;
 cin>>pre;
 cnt++;
 while(n>1)
 {
  cin>>x;
  if(x>pre)
  {
   pre=x;
   cnt++;
  }
  else
  {
   if(cnt>ma)
   ma=cnt;
   cnt=1;
   pre=x;
  }
  n--;
 }
 if(cnt>ma)
 ma=cnt;
 cout<<ma;
}