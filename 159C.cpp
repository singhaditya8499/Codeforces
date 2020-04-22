#include "bits/stdc++.h"
using namespace std;
 //***********************************Functions and macros begin*************************************//
#define pi pair<int,int>
#define pii pair<pi,int>
#define pb push_back
#define fast ios_base::sync_with_stdio
#define fast1 cin.tie(NULL)
typedef long long int  ll;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 int mod_exp(int a,int p,int m) //Modular exponentiation
{if(p<=1) return a%m;if(p&1){int x=mod_exp(a,(p-1)/2,m); return a%m*x%m*x%m;}else{int x=mod_exp(a,p/2,m); return x*x;}}
 int gcd(int a,int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
  //*********************************** Fucntions and macros end  *************************************// 
  int main()
{
 int n;
 cin>>n;
 string s,tmp;
 cin>>s;
 for(int i=0;i<n;i++)
 tmp=tmp+s;
 map<char,vector<int> > m;
 for(int i=0;i<tmp.length();i++)
 {
  m[tmp[i]].push_back(i);
 }
 int q;
 cin>>q;
 for(int i=0;i<q;i++)
 {
  int k;
  char c;
  cin>>k>>c;
  k--;
  tmp[m[c][k]]='#';
  m[c].erase(m[c].begin()+k);
 }
 for(int i=0;i<tmp.length();i++)
 if(tmp[i]!='#')
 cout<<tmp[i];
}