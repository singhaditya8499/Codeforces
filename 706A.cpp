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
    double n,m;
    cin>>n>>m;
    int t;
    cin>>t;
    double ans=10000000;
    for(int i=0;i<t;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        ans=min(ans,sqrt(pow(n-a,2)+pow(m-b,2))/c);
    }
    printf("%0.7f\n",ans);
    //cout<<ans<<"\n";
}