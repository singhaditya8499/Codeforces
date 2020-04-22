#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    int ans=0;
    set<string> oo;
    while(n--)
    {
        string s;
        cin>>s;
        set<char> ss;
        for(int i=0;i<s.length();i++)
        ss.insert(s[i]);
        string tmp;
        set<char>::iterator it;
        for(it=ss.begin();it!=ss.end();it++)
        tmp+=(*it);
        if(oo.find(tmp)==oo.end())
        {
            ans++;
            oo.insert(tmp);
        }
    }
    cout<<ans;
}