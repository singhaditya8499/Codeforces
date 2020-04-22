#include <bits/stdc++.h>
#include <vector>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    if(n==2&&arr[0].first==arr[1].first)
    {
        cout<<-1<<"\n";
        return 0;
    }
    sort(arr,arr+n);
    cout<<n-1<<"\n";
    for(int i=1;i<n;i++)
        cout<<arr[i].second+1<<" ";
}