#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<pair<char,int> > v;
    for(int i=0;i<s.length();i++)
    {
        v.push_back(make_pair(s[i],i));
    }
    sort(v.begin(),v.end());
    sort(v.begin()+k,v.end(),cmp);
    for(int i=k;i<v.size();i++)
        cout<<v[i].first;
}