#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
ll gcd(ll a,ll b)
{
 if(b==0)
  return a;
 return gcd(b,a%b);
}
int main()
{
 int n,x,y;
 cin>>n>>x>>y;
 int arr[n];
 int cnt=0;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  if(arr[i]<=x)
   cnt++;
 }
 if(x>y)
 {
  cout<<n<<"\n";
  return 0;
 }
 if(cnt%2==0)
  cout<<cnt/2<<"\n";
 else
  cout<<(cnt+1)/2<<"\n";
}