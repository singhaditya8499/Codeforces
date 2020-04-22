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
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(r%2==0)
        {
            cout<<r/2<<" "<<r<<"\n";
        }
        else
        {
            cout<<(r-1)/2<<" "<<r-1<<"\n";
        }
    }
}