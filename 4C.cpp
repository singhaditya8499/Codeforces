#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 set<string> db;
 map<string,int> dic;
 for(int i=0;i<n;i++)
 {
  string name;
  cin>>name;
  if(!db.count(name))
  {
   db.insert(name);
   dic[name]=0;
   cout<<"OK"<<endl;
  }
  else
  {
   string nstr = name+to_string(++dic[name]);
   db.insert(nstr);
   cout<<nstr<<endl;
   }
 }
}