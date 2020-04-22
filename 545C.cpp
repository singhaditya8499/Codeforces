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
    pair<ll,ll> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    int ans=min(2,n);
    ll last=arr[0].first;
    for(int i=1;i<n-1;i++)
    {
        if((arr[i].first-arr[i].second)>arr[i-1].first)
        {
            ans++;
        }
        else
        {
            if(arr[i].first+arr[i].second<arr[i+1].first)
            {
                ans++;
                arr[i].first+=arr[i].second;
            }
        }
    }
    cout<<ans<<"\n";
}