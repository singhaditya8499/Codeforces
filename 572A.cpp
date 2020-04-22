#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    int a,b,k,l;
    cin>>a>>b>>k>>l;
    long int ar[a],arr[b];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
        if(k==i+1)
        {
            k=ar[i];
        }
    }
    for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    l=arr[b-l];
    if(k<l)
    cout<<"YES";
    else
    cout<<"NO";
 return 0 ;
}