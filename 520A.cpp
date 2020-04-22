#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    int n;
    int a[26]={0};
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
     if(s[i]<='Z')
      a[s[i]-'A']=1;
     if(s[i]>='a')
      a[s[i]-'a']=1;
    }
    int cnt=0;
    for(int i=0;i<26;i++)
     if(a[i]==1)
      cnt++;
    if(cnt==26)
     cout<<"YES";
    else
     cout<<"NO";
}