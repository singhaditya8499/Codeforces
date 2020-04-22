#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int arr1[m];
    for(int i=0;i<m;i++)
      cin>>arr1[i];
    int i=0,j=0;
    int ans=0;
    while(i<n&&j<m)
    {
      if(arr1[j]>=arr[i])
      {
        ans++;
        j++;
        i++;
      }
      else
        i++;
    }
    cout<<ans;
}