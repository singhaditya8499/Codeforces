#include "bits/stdc++.h"
using namespace std;
 //***********************************Functions and macros begin*************************************//
 #define pi pair<int,int>
#define pii pair<pi,int>
#define pb push_back
#define fast ios_base::sync_with_stdio
#define fast1 cin.tie(NULL)
#define mod1 1000005187
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
#define PI 3.14159265
#define R3 1.7320508
#define R5 2.2360679
typedef long long int  ll;
const ll mod=1e9+7;
int phi(int n) //No of coprimes
{int result=n;for(int i=2;i*i<=n;i++)if(n%i==0){while(n%i==0) n=n/i;result-=result/i;}if(n>1) result-=result/n; return result;}
 ll mod_pow(ll base,ll e) 
{ ll ans=1; while(e){if(e&1) ans=(ans*base)%mod;base=(base*base)%mod;e>>=1;}return ans;}
 int gcd(int a,int b) //Greatest common divisior
{return b ? gcd(b,a%b) : a;}
  //*********************************** Fucntions and macros end  *************************************// 
string a,b,ans;
void solve(int arr[],int j)
{
 //cout<<"hii";
 if(ans.length()==a.length())
 {
  //cout<<"k";
  return;
 }
 bool pre=false;
 //cout<<b[j]-'0'<<" "<<arr[b[j]-'0']<<"\n";
 if(arr[b[j]-'0']>0)
 {
  arr[b[j]-'0']--;
  ans+=b[j];
  solve(arr,j+1);
  if(ans.length()==a.length())
  {
   //cout<<"k";
   return;
  }
  arr[b[j]-'0']++;
  ans=ans.substr(0,ans.length()-1);
 }
 for(int i=b[j]-'0'-1;i>=0;i--)
 {
  if(arr[i]>0)
  {
   arr[i]--;
   pre=true;
   ans+=char(i+'0');
   break;
  }
 }
 if(pre)
 {
  for(int i=9;i>=0;i--)
  {
   while(arr[i])
   {
    ans+=char(i+'0');
    arr[i]--; 
   } 
  } 
 }
 //cout<<"l";
 return;
}
int main()
{
 cin>>a>>b;
 if(b.length()>a.length())
 {
  sort(a.begin(),a.end());
  for(int i=a.length()-1;i>=0;i--)
  cout<<a[i];
  return 0;
 }
 int arr[10]={0};
 for(int i=0;i<a.length();i++)
 arr[a[i]-'0']++;
 solve(arr,0);
 cout<<ans<<"\n";
}