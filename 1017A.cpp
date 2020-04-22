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
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first>b.first)
        return true;
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    pair<int,int> x[n];
    memset(x,0,sizeof x);
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        x[i].first+=(a+b+c+d);
        x[i].second=i;
    }
    int anss=x[0].first;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(x[i].first>anss)
        {
            ans++;
        }
    }
    cout<<ans+1<<"\n";
}