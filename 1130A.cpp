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
    int n;
    cin>>n;
    int cnt0=0,cntp=0,cntn=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
            cnt0++;
        else if(x>0)
            cntp++;
        else cntn++;
    }
    n=ceil(float(n)/float(2));
    // cout<<n<<"\n";
    // cout<<cntp<<" "<<cntn<<"\n";
    if(cntp>=n)
    {
        cout<<1<<"\n";
    }
    else if(cntn>=n)
    {
        cout<<-1<<"\n";
    }
    else
        cout<<0<<"\n";
}