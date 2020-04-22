#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;
bool cmp(string a,string b)
{
    if(a.length()!=b.length())
    {
        return a.length()<b.length();
    }
    return a<b;
}
int main()
{
 int n,m;
 cin>>n>>m;
 string a,b;
 cin>>a>>b;
 int ans=INT_MAX;
 vector<int> sol;
 for(int i=0;i<=m-n;i++)
 {
     int cur=0;
     vector<int> tmp;
     for(int j=0;j<n;j++)
     {
         if(a[j]!=b[j+i])
         {
             tmp.push_back(j+1);
             cur++;
         }
     }
     if(cur<ans)
     {
         ans=cur;
         sol=tmp;
     }
 }
 cout<<ans<<"\n";
 for(int i=0;i<sol.size();i++)
 cout<<sol[i]<<" ";
}