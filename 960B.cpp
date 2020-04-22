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
 struct cmp{
 bool operator() (ll a,ll b)
 {
  return a<b;
 }
};
int main()
{
 int n,k1,k2;
 cin>>n>>k1>>k2;
 int arr[n],arr1[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 for(int i=0;i<n;i++)
  cin>>arr1[i];
  priority_queue<ll,vector<ll>,cmp> q;
 for(int i=0;i<n;i++)
 {
  q.push(pow(arr[i]-arr1[i],2));
 }
 int x=k1+k2;
 while(x--)
 {
  ll y=q.top();
  q.pop();
  y=sqrt(y);
  y--;
  q.push(y*y);
 }
 ll sum=0;
 while(!q.empty())
 {
  sum+=q.top();
  q.pop();
 }
 cout<<sum<<"\n";
}