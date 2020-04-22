#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll arr[4];
    for(int i=0;i<4;i++)
    cin>>arr[i];
    sort(arr,arr+4);
    cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<"\n";
    }