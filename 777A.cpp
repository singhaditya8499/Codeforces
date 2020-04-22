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
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    ll n,x;
    cin>>n>>x;
    n=n%6;
    int arr[6][3]={ {0,1,2},{1,0,2},{1,2,0},{2,1,0},{2,0,1,},{0,2,1} };
    cout<<arr[n][x]<<"\n";
}