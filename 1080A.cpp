#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,k;
    int res,cur;
    cin>>n>>k;
    res=0;
    cur=n*2;
    res+=(cur+k-1)/k;
    cur=n*5;
    res+=(cur+k-1)/k;
    cur=n*8;
    res+=(cur+k-1)/k;
    cout<<res<<endl;
}