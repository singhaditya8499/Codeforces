#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
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
 int n;
 cin>>n;
 vector<string> s;
 for(int i=0;i<n;i++)
 {
     string x;
     cin>>x;
     s.push_back(x);
 }
 sort(s.begin(),s.end(),cmp);
 for(int i=0;i<n-1;i++)
 {
     if(s[i+1].find(s[i])==-1)
     {
         cout<<"NO";
         return 0;
     }
 }
 cout<<"YES\n";
 for(int i=0;i<n;i++)
 cout<<s[i]<<"\n";
}