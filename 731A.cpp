#include<bits/stdc++.h>
using namespace std;
 int main()
{
 string s;
 cin>>s;
 int l=s.length();
 char cur='a';
 long int ans=0;
 for(int i=0;i<l;i++)
 {
  int front,back;
  if(s[i]>=cur)
  {
   front=s[i]-cur;
   back=cur-'a'+'z'-s[i]+1;
  }
  else
  {
   front=cur-s[i];
   back='z'-cur+s[i]-'a'+1;
  }
  cur=s[i];
  ans+=min(front,back);
 }
 cout<<ans;
}