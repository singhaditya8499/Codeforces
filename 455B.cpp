#include<iostream>
using namespace std;
int arr[26][100001];
int node;
int win[100001],lose[100001];
void add(string s)
{
 int curr=0;
 for(int i=0;i<s.length();i++)
 {
  int u=s[i]-'a';
  if(arr[u][curr]==0)
  {
   arr[u][curr]=node;
   curr=node;
   node++;
  }
  else
  {
   curr=arr[u][curr];
  }
 }
}
void solve(int u)
{
 int isleaf=1;
 win[u]=lose[u]=0;
 for(int i=0;i<26;i++)
 {
  if(arr[i][u])
  {
   isleaf=0;
   solve(arr[i][u]);
   if(!win[arr[i][u]])
    win[u]=1;
   if(!lose[arr[i][u]])
    lose[u]=1;
  }
 }
 if(isleaf)
 {
  win[u]=0;
  lose[u]=1;
 }
}
int main()
{
 int n,k;
 cin>>n>>k;
 string s[n];
 node=1;
 for(int i=0;i<n;i++)
 {
  cin>>s[i];
  add(s[i]);
 }
 solve(0);
 if(win[0]&&lose[0])
  cout<<"First";
 else if(win[0])
 {
  if(k%2)
   cout<<"First";
  else
   cout<<"Second";
 }
 else
  cout<<"Second";
}