#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
 int n,ma;
 cin>>n>>ma;
 int arr[n],arr1[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 for(int i=0;i<n;i++)
  cin>>arr1[i];
 double mi=0,maa=1000000001,ans;
 double feul,cur;
 int f=0;
 while(maa>mi&&(maa-mi)>0.0000001)
 {
  double m=mi+(maa-mi)/2;
  ans=m;
  feul=m;
  cur=ma+feul;
  int yes=1;
  for(int i=0;i<n;i++)
  {
   if(i==0)
   {
    feul=feul-cur/arr[i];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
   }
   else if(i==n-1)
   {
    feul=feul-cur/arr1[i];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
    feul=feul-cur/arr[i];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
    feul=feul-cur/arr1[0];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
   }
   else
   {
    feul=feul-cur/arr1[i];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
    feul=feul-cur/arr[i];
    if(feul<0)
    {
     yes=0;
     break;
    }
    cur=ma+feul;
   }
  }
  if(feul==0)
   break;
  else if(feul<0)
   mi=m;
  else
   {
       maa=m;
       f=1;
   }
  //cout<<mi<<" "<<maa<<"\n";
  }
 if(f==0)
  cout<<-1;
 else
 printf("%.9lf\n",ans );
}