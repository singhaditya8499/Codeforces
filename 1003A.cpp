#include<iostream>
#include<queue>
#include<string>
#include<utility>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      m[x]++;
    }
    int ans=-1;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
      ans=max(ans,it->second);
    cout<<ans;
}