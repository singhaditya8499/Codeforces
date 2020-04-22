#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 int main()
{
    int n;
    cin>>n;
    vector<ll> first,second;
    int last;
    ll sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x>=0)
            sum+=x;
        else
            sum1+=-x;
        if(x>=0)
            first.push_back(x);
        else
            second.push_back(abs(x));
        if(i==n-1)
        {
            if(x>=0)
                last=1;
            else
                last=2;
        }
    }
    int winner=0;
    int i=0,j=0;
    if(sum>sum1)
    {
        cout<<"first\n";
        return 0;
    }
    if(sum1>sum)
    {
        cout<<"second\n";
        return 0;
    }
    while(i<first.size()&&j<second.size())
    {
        if(first[i]>second[j])
        {
            winner=1;
            break;
        }
        else if(first[i]<second[j])
        {
            winner=2;
            break;
        }
        i++;
        j++;
    }
    if(winner)
    {
        if(winner==1)
            cout<<"first\n";
        else
            cout<<"second\n";
    }
    else
    {
        if(i==first.size()&&j!=second.size())
        {
            cout<<"second\n";
        }
        else if(i!=first.size()&&j==second.size())
            cout<<"first\n";
        else
        {
            if(last==1)
                cout<<"first\n";
            else
                cout<<"second\n";
        }
    }
}