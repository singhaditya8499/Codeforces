#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void generate(string s,vector<int>&gen,int len)
{
    if(len==7)
        return;
    int x;
    stringstream geek(s+'0');
    geek>>x;
    gen.push_back(x);
    generate(s+'0',gen,len+1);
    stringstream geek1(s+'1');
    geek1>>x;
    gen.push_back(x);
    generate(s+'1',gen,len+1);
 }
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    pair<int,char> p[26];
    for(int i=0;i<26;i++)
    {
        p[i].second=char('a'+i);
        cin>>p[i].first;
    }
    vector<int> v;
    for(int i=0;i<s.length();i++)
        v.push_back(p[s[i]-'a'].first);
    sort(p,p+26);
    for(int i=0;i<k;i++)
        v.push_back(p[25].first);
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        ans=ans+(v[i]*(i+1));
    }
    cout<<ans<<"\n";
}