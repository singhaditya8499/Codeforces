#include<bits/stdc++.h>
using namespace std;
 int main()
{
    string s;
    cin>>s;
    int ans=0;
    if(s.length()==1)
    {
        cout<<0;
        return 0;
    }
    if(s.length()==2&&s[0]==s[1])
    {
        cout<<0;
        return 0;
    }
    int i=0,j=s.length()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            cout<<s.length();
            return 0;
        }
    }
    int yes=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            yes=0;
            break;
        }
    }
    if(yes)
    cout<<0;
    else
    cout<<s.length()-1;
}