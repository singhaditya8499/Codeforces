#include<bits/stdc++.h>
using namespace std;
 bool pal(string s)
{
 int i=0,j=s.length()-1;
 while(i<=j)
 {
  if(s[i]!=s[j])
  {
   return false;
  }
  i++;
  j--;
 }
 return true;
}
int main()
{
 string s;
 cin>>s;
 int l=s.length();
 for(int i=0;i<l;i++)
 {
  string ans;
  for(int j=0;j<l;j++)
  {
   ans+=s[j];
  }
  int b=0,c=l-1;
  int change=0;
  while(b<=c)
  {
   if(ans[b]!=ans[c])
   {
    ans[b]=ans[c];
    change=1;
    break;
   }
   b++;
   c--;
  }
  if(pal(ans)&&change==1)
  {
   cout<<"YES";
   return 0;
  }
  if(change==0&&pal(ans)&&l%2==1)
  {
   cout<<"YES";
   return 0;
  }
 }
 cout<<"NO";
}