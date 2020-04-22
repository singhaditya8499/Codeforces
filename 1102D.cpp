//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#define mod 1000000007
using namespace std;
 typedef long long ll;
int find(int x,int father[])
{
 if(father[x]==x)
  return x;
 return father[x]=find(father[x],father);
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 string s;
 cin>>s;
 int cnt0=0,cnt1=0,cnt2=0;
 vector<int> zero,one,two;
 for(int i=0;i<n;i++)
 {
  if(s[i]=='0')
  {
   cnt0++;
   zero.push_back(i);
  }
  else if(s[i]=='1')
  {
   cnt1++;
   one.push_back(i);
  }
  else
  {
   cnt2++;
   two.push_back(i);
  }
 }
 int right=n/3;
 int oo=zero.size()-1,tt=0;
 if(cnt0<right)
 {
  int i=0,j=0,k=0;
  while(cnt1>right&&cnt2>right&&cnt0<right)
  {
   if(one[j]<two[k])
   {
    s[one[j]]='0';
    one[j]=-1;
    j++;
    cnt1--;
    cnt0++;
   }
   else
   {
    s[two[k]]='0';
    two[k]=-1;
    k++;
    cnt2--;
    cnt0++;
   }
  }
  while(cnt1>right&&cnt0<right)
  {
   s[one[j]]='0';
   one[j]=-1;
   j++;
   cnt1--;
   cnt0++;
  }
  while(cnt2>right&&cnt0<right)
  {
   s[two[k]]='0';
   two[k]=-1;
   k++;
   cnt2--;
   cnt0++;
  }
  tt=k;
 }
 //cout<<s<<"\n";
 if(cnt2<right)
 {
  int i=zero.size()-1;
  int j=one.size()-1;
  while(cnt0>right&&cnt1>right&&cnt2<right)
  {
   if(zero[i]>one[j])
   {
    s[zero[i]]='2';
    zero[i]=-1;
    i--;
    cnt0--;
    cnt2++;
   }
   else
   {
    s[one[j]]='2';
    one[j]=-1;
    j--;
    cnt1--;
    cnt2++;
   }
  }
  while(cnt0>right&&cnt2<right)
  {
   s[zero[i]]='2';
   zero[i]=-1;
   i--;
   cnt0--;
   cnt2++;
  }
  while(cnt1>right&&cnt2<right)
  {
   s[one[j]]='2';
   one[j]=-1;
   j--;
   cnt1--;
   cnt2++;
  }
  oo=i;
 }
 if(cnt1<right)
 {
  while(cnt2>right&&cnt1<right)
  {
   s[two[tt]]='1';
   tt++;
   cnt2--;
   cnt1++;
  }
  while(cnt0>right&&cnt1<right)
  {
   s[zero[oo]]='1';
   oo--;
   cnt0--;
   cnt1++;
  }
 }
 cout<<s<<"\n";
}