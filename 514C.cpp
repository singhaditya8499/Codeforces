/*#include "bits/stdc++.h"
using namespace std;
#define h 1000000000000007;
#define MAX 3*1000009
#define base 313
long long powers[MAX];
void pre()
{
 powers[0]=1;
 for(int i=1;i<=MAX;i++)
 {
  powers[i]=(powers[i-1]*base)%h;
 }
}
int main()
{
 int n,t;
 cin>>n>>t;
 map<long int,int> m;
 for(int i=0;i<n;i++)
 {
  string s;
  cin>>s;
  long long int hash=0;
  for(int j=0;j<s.length();j++)
  {
   hash+=powers[j]*s[j]; 
  }
  m[hash]++;
 }
 //sort(v.begin(),v.end());
 for(int j=0;j<t;j++)
 {
  string s;
  cin>>s;
  long long int hash=0;
  for(int i=0;i<s.length();i++)
  {
   hash+=s[i]*powers[i];
  }
  int found=0;
  for(int i=0;i<s.length();i++)
  {
   for(char a='a';a<='c';a++)
   {
    if(a!=s[i])
    {
     long long int tt=hash-powers[i]*s[i];
     tt=tt+powers[i]*a;
     if(m.find(tt)!=m.end())
     {
      cout<<"YES\n";
      found=1;
      break;
     }
    }
   }
   if(found)
   break;
  }
  if(!found)
  {
   cout<<"NO\n";
  }
 }
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define MOD 1000000000000007
#define base 313
#define MAX 3*1000009
 string s[MAX];
ll val[MAX];
ll power[MAX];
map<ll,ll>mp;
void pre()
{
    power[0]=1;
    for(int i=1; i<=MAX; i++)power[i]=(power[i-1]*base)%MOD;
}
int main()
{
    pre();
    int n,m;
    ll cc=0;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        ll sum=0;
        for(int j=0; j<s[i].size(); j++)
        {
            sum+=(power[j]*s[i][j]);
        }
        mp[sum]++;
    }
    for(int i=0; i<m; i++)
    {
        string ss;
        cin>>ss;
        int f=0;
        ll sss=0;
        for(int j=0; j<ss.size(); j++)
        {
            sss+=(power[j]*ss[j]);
        }
        for(int j=0; j<ss.size(); j++)
        {
            for(char l='a'; l<='c'; l++)
            {
                if(l!=ss[j])
                {
                    ll t=sss-(ss[j]*power[j]);
                    t=t+(l*power[j]);
                    if(mp.find(t)!=mp.end())
                    {
                       cout<<"YES\n";
                       f=1;
                       break;
                    }
                }
            }
            if(f)break;
        }
        if(!f)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}