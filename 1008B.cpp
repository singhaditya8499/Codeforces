#include<iostream>
#include<queue>
#include<string>
#include<utility>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    pair<long int,long int> arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i].first>>arr[i].second;
    long int maa=max(arr[0].first,arr[0].second);
    int ans=1;
    for(int i=1;i<n;i++)
    {
      long int tmp=-1;
      if(arr[i].first<=maa)
      {
        tmp=arr[i].first;
      }
      if(arr[i].second<=maa)
      {
        if(tmp==-1)
          tmp=arr[i].second;
        else if(arr[i].second>tmp)
          tmp=arr[i].second;
      }
      if(tmp==-1)
      {
        ans=0;
        break;
      }
      maa=tmp;
    }
    if(ans)
      cout<<"YES\n";
    else
      cout<<"NO\n";
}