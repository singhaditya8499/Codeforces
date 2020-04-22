#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
double x[3],y[3],r[3],err[3];
double check(double a,double b)
{
    for(int i=0;i<3;i++)
    {
        err[i]=sqrt(pow(a-x[i],2)+pow(b-y[i],2))/r[i];
    }
    double total_err=0.0;
    for(int i=0;i<3;i++)
    {
        total_err+=pow(err[i]-err[(i+1)%3],2);
    }
    return total_err;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    ll ans=0;
    int open,close;
    int cnt=0;
    priority_queue<pair<int,int> > q;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='?')
        {
            cin>>open>>close;
            s[i]=')';
            cnt--;
            ans=ans+close;
            q.push(make_pair(close-open,i));
        }
        else if(s[i]=='(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if(cnt<0)
        {
            if(q.size()==0)
            {
                cout<<"-1\n";
                return 0;
            }
            pair<int,int> p=q.top();
            q.pop();
            s[p.second]='(';
            ans=ans-p.first;
            cnt+=2;
        }
    }
    if(cnt!=0)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<ans<<"\n";
        cout<<s<<"\n";
    }
    return 0;
}