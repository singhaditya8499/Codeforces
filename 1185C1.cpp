#include<bits/stdc++.h>
using namespace std;
 typedef unsigned long long int ull;
typedef long long int ll;
 #define mod 1000000007
 int main()
{
 int n;
 // cin>>n;
 int total;
 cin>>n>>total;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 cout<<0<<" ";
 vector<int> tmp;
 tmp.push_back(arr[0]);
 for(int i=1;i<n;i++)
 {
  int left=total-arr[i];
  sort(tmp.begin(),tmp.end());
  int cnt=0;
  // cout<<"hi";
  for(int j=0;j<tmp.size();j++)
  {
   if(left<tmp[j])
    break;
   else
   {
    left-=tmp[j];
    cnt++;
   }
   // cout<<left<<" "<<j<<"\n";
  }
  cout<<tmp.size()-cnt<<" ";
  tmp.push_back(arr[i]);
    }
}