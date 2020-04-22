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
 int n,m;
 cin>>n>>m;
 int arr[n][2*m];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<2*m;j++)
   cin>>arr[i][j];
 }
 int cnt=0;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<2*m;j+=2)
  {
   if(arr[i][j]==1||arr[i][j+1]==1)
    cnt++;
  }
 }
 cout<<cnt<<"\n";
 return 0;
}