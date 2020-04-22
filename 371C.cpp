#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 bool isprime(ll x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    string s;
    cin>>s;
    int br=0,sa=0,ch=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            br++;
        else if(s[i]=='S')
            sa++;
        else
            ch++;
    }
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll r;
    cin>>r;
    int curmin=1000000;
    if(br!=0)
    curmin=min(curmin,nb/br);
    if(sa!=0)
    curmin=min(curmin,ns/sa);
    if(ch!=0)
    curmin=min(curmin,nc/ch);
    nb-=curmin*br;
    ns-=curmin*sa;
    nc-=curmin*ch;
    ll ans=curmin;
    // cout<<ans<<"\n";
    while(((nb!=0&&br!=0)||(ns!=0&&sa!=0)||(nc!=0&&ch!=0))&&r>0)
    {
        int cost=0;
        // cout<<"heyyaa\n";
        if(nb<br&&br!=0)
        {
            cost+=(br-nb)*pb;
            nb+=(br-nb);
        }
        if(ns<sa&&sa!=0)
        {
            cost+=(sa-ns)*ps;
            ns+=(sa-ns);
        }
        if(nc<ch&&ch!=0)
        {
            cost+=(ch-nc)*pc;
            nc+=(ch-nc);
        }
        if(cost<=r)
        {
            r-=cost;
            ans++;
            nb-=br;
            nc-=ch;
            ns-=sa;
        }
        else
            break;
    }
    // cout<<r/5<<"\n";
    ll cost=0;
    if(br!=0)
        cost+=pb*br;
    if(sa!=0)
        cost+=ps*sa;
    if(ch!=0)
        cost+=pc*ch;
    ans+=(r/cost);
    cout<<ans<<"\n";
 }