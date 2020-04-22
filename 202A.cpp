#include<bits/stdc++.h>
using namespace std;
string ans;
bool ispalindrome(string s)
{
    int i=0,j=s.length()-1;
    if(s.length()==0)
    return 0;
    while(i<=j)
    {
        if(s[i]!=s[j])
        return 0;
        i++;
        j--;
    }
    return 1;
}
bool cmp(string a,string b)
{
    return a>b;
}
void solve(string s,int pos,string tmp)
{
    //cout<<tmp<<" ";
    if(ispalindrome(tmp))
    {
                if(tmp>ans)
        {
            ans=tmp;
        }
    }
    if(pos==s.length())
    return;
    solve(s,pos+1,tmp+s[pos]);
    solve(s,pos+1,tmp);
}
int main()
{
    string s,a;
    cin>>s;
    solve(s,0,a);
    cout<<ans;
}