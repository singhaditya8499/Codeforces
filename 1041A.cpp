#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
#include<map>
#include<numeric> //iota
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 int ans=arr[n-1]-arr[0]+1;
 ans-=2;
 ans-=(n-2);
 cout<<ans;
}