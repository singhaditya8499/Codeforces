#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
 int last(ll x)
{
 return x%10;
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s;
 cin>>s;
 int rem=0;
 for(int i=0;i<s.length();i++)
 {
  rem=(rem*10+(s[i]-'0'));
  rem=rem%4;
 }
 int sum=1;
 if(rem==1)
  sum+=2;
 else if(rem==2)
  sum+=4;
 else if(rem==3)
  sum+=8;
 else sum+=6;
  if(rem==0||rem==2)
  sum+=6;
 else
  sum+=4;
  if(rem==1)
  sum+=3;
 else if(rem==2)
  sum+=9;
 else if(rem==3)
  sum+=7;
 else
  sum+=1;
 cout<<sum%5<<"\n";
}