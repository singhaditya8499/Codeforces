#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<long int,int> arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i].first;
      arr[i].second=i;
    }
    int pos[100000+100];
    for(int i=0;i<=100000+50;i++)
      pos[i]=0;
    sort(arr,arr+n);
    int j=n-2,ans=0;
    for(int i=n-1;i>=0;i--)
    {
      while(j>=0&&(arr[j].first>=arr[i].first||pos[arr[j].second]==1))
      {
        j--;
        //cout<<1;
      }
      if(j>=0)
      {
        //cout<<arr[i].first<<" "<<arr[j].second<<" "<<arr[j].first<<"\n";
        pos[arr[j].second]=1;
        ans++;
      }
      else
        break;
    }
    cout<<ans;
}