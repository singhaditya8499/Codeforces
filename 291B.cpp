#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
#define mp make_pair
  int main()
{
    string s;
    getline(cin,s);
    int i=0;
     while(i<s.length())
    {
        while(s[i]==' ')i++;
        if(s[i]=='"')
        {
            i++;
            string t;
            while(s[i]!='"' && i<s.length())    {t+=s[i];i++;}
            cout<<"<"<<t<<">\n";
            i++;
        }
        else
        {
            string t;
            while(s[i]!=' ' && i<s.length()){t+=s[i];i++;}
            if(t.length()!=0)   cout<<"<"<<t<<">\n";
        }
    }
 }