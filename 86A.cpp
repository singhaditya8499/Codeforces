#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
long long int cd(long long int a)
{
 if(a<10)
  return 1;
 if(a<100)
  return 2;
 if(a<1000)
  return 3;
 if(a<10000)
  return 4;
 if(a<100000)
  return 4;
 if(a<1000000)
  return 5;
 if(a<10000000)
  return 6;
 if(a<100000000)
  return 7;
 if(a<1000000000)
  return 8;
 if(a==1000000000)
  return 9;
}
int main()
{
 long long int a,b;
 cin>>a>>b;
 long long int nds=cd(a),nde=cd(b),ma=0;
 //cout<<nds<<" "<<nde<<endl;
 if(b-a<100000)
 {
  for(long long int i=a;i<=b;i++)
  {
   long long int tmp=i,ans=0;
   int p=0;
   while(tmp)
   {
    ans=ans+(9-tmp%10)*pow(10,p);
    p++;
    tmp=tmp/10;
   }
   //cout<<ans<<" ";
   if(ans*i>ma)
    ma=ans*i;
  }
 }
 else
 {
  long long int tmp,ans=0;
  tmp=a;
  int p=0;
  while(tmp)
  {
   ans=ans+(9-tmp%10)*pow(10,p);
   p++;
   tmp=tmp/10; 
  }
  if(ans*a>ma)
   ma=ans*a;
     tmp=b;
  p=0;
  ans=0;
  while(tmp)
  {
   ans=ans+(9-tmp%10)*pow(10,p);
   p++;
   tmp=tmp/10; 
  }
  if(ans*b>ma)
   ma=ans*b;
  for(int i=0;i<=9;i++)
  {
   long long int tmp1=5*pow(10,i);
   tmp=tmp1;
   ans=0;
   if(tmp>=a&&tmp<=b)
   {
    ans=0;
    int p=0;
    while(tmp)
    {
     ans=ans+(9-tmp%10)*pow(10,p);
        p++;
     tmp=tmp/10;
    }
    if(ans*tmp1>ma)
     ma=ans*tmp1;
    }
   tmp1=5*pow(10,i)-1;
   tmp=tmp1;
   ans=0;
   if(tmp>=a&&tmp<=b)
   {
    int p=0;
    while(tmp)
    {
     ans=ans+(9-tmp%10)*pow(10,p);
     tmp=tmp/10;
     p++;
    }
    if(ans*tmp1>ma)
     ma=ans*tmp1;
   }
  }
 }
 cout<<ma;
}