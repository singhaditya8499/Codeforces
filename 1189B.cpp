#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define pi 3.1415926535
#define mod 379                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    if(arr[n-1]>=arr[n-2]+arr[n-3])
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    cout<<arr[n-3]<<" "<<arr[n-1]<<" "<<arr[n-2]<<" ";
    for(int i=n-4;i>=0;i--)
    cout<<arr[i]<<" ";
    cout<<endl;
 }