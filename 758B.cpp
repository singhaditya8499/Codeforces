#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    string s;
    cin>>s;
    int r,b,y,g;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            r=i;
            break;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='G')
        {
            g=i;
            break;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
        {
            b=i;
            break;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='Y')
        {
            y=i;
            break;
        }
    }
    // cout<<r<<" "<<b<<" "<<y<<" "<<g<<"\n";
    r=r%4;
    b=b%4;
    g=g%4;
    y=y%4;
    int cntr=0,cntb=0,cnty=0,cntg=0;
    for(int i=0;i<s.length();i++)
    {
        if(i%4==r&&s[i]=='!')
            cntr++;
        if(i%4==b&&s[i]=='!')
            cntb++;
        if(i%4==y&&s[i]=='!')
            cnty++;
        if(i%4==g&&s[i]=='!')
            cntg++;         
    }
    cout<<cntr<<" "<<cntb<<" "<<cnty<<" "<<cntg<<"\n";
}