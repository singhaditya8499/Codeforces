#include<iostream>
#include<unordered_map>
#include<vector>
#include<utility>
#include<queue>
#include<stack>
#include<set>
 using namespace std;
int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 int arr[26];
 for(int i=0;i<26;i++)
  arr[i]=0;
 int aa=0;
 int cnt=0;
 for(int i=0;i<n;i++)
 {
  if(arr[s[i]-'a']==0)
   aa++;
  arr[s[i]-'a']++;
  if(arr[s[i]-'a']>=2)
   cnt++;
 }
 //cout<<aa<<"\n";
 if(cnt||aa==1)
  cout<<"Yes\n";
 else
  cout<<"No\n";
}