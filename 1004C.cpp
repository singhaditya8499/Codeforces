#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int distinct[n];
    for(int i=n-1;i>=1;i--)
    {
        s.insert(arr[i]);
        distinct[i]=s.size();
    }
    set<int>chk;
    long long ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(i==0)
        {
            ans=ans+distinct[i+1];
        }
        else if(chk.find(arr[i])==chk.end())
        {
            ans=ans+distinct[i+1];
        }
        chk.insert(arr[i]);
    }
    cout<<ans;
}