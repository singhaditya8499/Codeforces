#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    int o=0;
    for(int i=0;i<s.length();i++)
      if(s[i]=='0'||s[i]=='2')
        t+=s[i];
      else
        o++;
     int i=0;
    while(t[i]=='0'&&i<t.length())
      cout<<t[i++];
    for(int i=0;i<o;i++)
      cout<<"1";
    for(;i<t.length();i++)
      cout<<t[i];
}