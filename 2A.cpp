#include "bits/stdc++.h"
using namespace std;
const int N=1e5+10;
vector<pair<string,long long int> > vp;
map<string,long long int> mp,mpp;
vector<long long int> v;
set<long long int> st;
int main()
{
   long long int n,x,ct=0,one[N],zero[N],mx=0,a,b,c,m;
   string s;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>s>>x;
       mp[s]+=x;
       vp.push_back({s,x});
   }
   for(auto i: mp)
        mx=max(mx,i.second);
   for(auto i:vp){
       mpp[i.first]+=i.second;
       if(mp[i.first]==mx&&mpp[i.first]>=mx)
                return cout<<i.first,0;
    }
}