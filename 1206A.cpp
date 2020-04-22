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
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
     int m;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s.find(arr[i]+arr1[j])==s.end())
            {
                cout<<arr[i]<<" "<<arr1[j]<<"\n";
                return 0;
            }
        }
    }
}