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
//#include<bits/stdc++.h>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 int main()
{
 ull a,b;
 cin>>a>>b;
 cout<<"YES\n";
 for(ull i=a;i<=b;i+=2)
  cout<<i<<" "<<i+1<<"\n";
}