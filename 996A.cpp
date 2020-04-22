//white_whale
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define mod 1000000007
using namespace std;
 typedef long long ll;
  int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll n;
 cin>>n;
 ll cnt=0;
 cnt=cnt+(n/100);
 n=n%100;
 cnt=cnt+(n/20);
 n=n%20;
 cnt=cnt+(n/10);
 n=n%10;
 cnt=cnt+(n/5);
 n=n%5;
 cnt+=n;
 cout<<cnt<<"\n";
 return 0;
}