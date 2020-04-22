//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
 bool cmp(int a,int b)
{
 return a>b;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 if(n<=2)
  cout<<0<<"\n";
 else
 {
  cout<<min((arr[n-1]-arr[1]),(arr[n-2]-arr[0]))<<"\n";
 }
 return 0;
}