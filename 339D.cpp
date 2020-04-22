#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#include<ctime>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
int solve(int cur,int ma,int arr[],int &h)
{
 if(cur>=ma)
 { 
  h=1;
  return arr[cur];
 }
 int left=solve(cur*2+1,ma,arr,h);
 int right=solve(cur*2+2,ma,arr,h);
 if(h%2==0)
 {
  arr[cur]=left^right;
 }
 else
 {
  arr[cur]=left|right;
 }
 h=h+1;
 return arr[cur];
}
void upward(int cur,int ma,int arr[],int &h)
{
 if(cur==0)
 {
  if(h%2==0)
   arr[cur]=arr[2*cur+1]^arr[2*cur+2];
  else
   arr[cur]=arr[2*cur+1]|arr[2*cur+2];  
  return;
 }
 if(cur>=ma)
 {
  h=1;
  if(cur%2==1)
   upward((cur-1)/2,ma,arr,h);
  else
   upward((cur-2)/2,ma,arr,h);
  return;
 }
 if(h%2==0)
  arr[cur]=arr[2*cur+1]^arr[2*cur+2];
 else
  arr[cur]=arr[2*cur+1]|arr[2*cur+2];
 h=h+1;
 if(cur%2==1)
  upward((cur-1)/2,ma,arr,h);
 else
  upward((cur-2)/2,ma,arr,h);
 }
int main()
{
 int n,m;
 cin>>n>>m;
 int size=2*pow(2,n)-1;
 int arr[size];
 for(int i=0;i<pow(2,n);i++)
  cin>>arr[int(size-pow(2,n)+i)];
 int h;
 solve(0,size-pow(2,n),arr,h);
 // for(int i=0;i<size;i++)
 //  cout<<arr[i]<<" ";
 // cout<<endl;
 while(m--)
 {
  int pos,val;
  cin>>pos>>val;
  pos--;
  arr[int(size-pow(2,n)+pos)]=val;
  upward(size-pow(2,n)+pos,size-pow(2,n),arr,h);
  // for(int i=0;i<size;i++)
  // cout<<arr[i]<<" ";
  // cout<<endl;
  cout<<arr[0]<<"\n";
 }
}