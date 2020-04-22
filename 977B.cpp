#include<iostream>
#include<map>
using namespace std;
 int main()
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 map<string,int> m;
 for(int i=0;i<n-1;i++)
 {
     m[s.substr(i,2)]++;
 }
 map<string,int>::iterator it;
 int maxcnt=0;
 for(it=m.begin();it!=m.end();it++)
 {
     if((*it).second>maxcnt)
     {
         maxcnt=it->second;
         s=it->first;
     }
 }
 cout<<s;
}