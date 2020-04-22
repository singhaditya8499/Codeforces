#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    string s;
  cin>>s;
  int n=s.length();
  int ans=1;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='n')
      continue;
    else
    {
      if(i+1>=n)
      {
        ans=0;
        break;
      }
      if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
        continue;
      else
      {
        ans=0;
        break;
      }
    }
  }
  if(ans)
    cout<<"YES\n";
  else
    cout<<"NO\n";
}