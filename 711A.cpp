#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
     cin>>s[i];
     for(int j=0;j<4;j++)
     {
      if(s[i][j]=='O'&&s[i][j+1]=='O'&&ans!=1)
      {
       s[i][j]='+';
       s[i][j+1]='+';
       ans=1;
      }
     }
    }
    if(ans==1)
    {
     cout<<"YES"<<endl;
     for(int i=0;i<n;i++)
      cout<<s[i]<<endl;
    }
    else
     cout<<"NO";
    return 0;
}