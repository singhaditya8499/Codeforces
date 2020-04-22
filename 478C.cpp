#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 int main()
{
    ll arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    ll tmp=(arr[0]+arr[1]+arr[2])/3;
    cout<<min(tmp,arr[0]+arr[1])<<"\n";
}