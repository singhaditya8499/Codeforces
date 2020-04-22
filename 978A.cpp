#include<bits/stdc++.h>
#include<unordered_set>
typedef long long ll;
using namespace std;
void generate(vector<ll> &v,ll &x)
{
    if(x>=10000000000)
        return;
    v.push_back(x);
    ll y=x*10+4;
    generate(v,y);
    y=x*10+7;
    generate(v,y);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    unordered_set<int> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--)
    {
        if(s.find(arr[i])==s.end())
        {
            v.push_back(arr[i]);
            s.insert(arr[i]);
        }
    }
    reverse(v.begin(),v.end());
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}