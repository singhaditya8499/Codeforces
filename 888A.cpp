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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            ans++;
        else if(arr[i]<arr[i-1]&&arr[i]<arr[i+1])
            ans++;
    }
    cout<<ans<<"\n";
}