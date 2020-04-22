#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 typedef long long ll;
 int last(ll x)
{
 return x%10;
}
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 string s,s1;
 cin>>s;
 s1=s;
 reverse(s1.begin(),s1.end());
 cout<<s<<s1<<"\n";
}