#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int main()
{
 int n;
 cin>>n;
 long long int ans=0;
 map<string,int> aa;
 while(n--)
 {
  string s;
  cin>>s;
  aa[s]++;
 }
 ans=ans+aa["Icosahedron"]*20;
 ans=ans+aa["Cube"]*6;
 ans=ans+aa["Tetrahedron"]*4;
 ans=ans+aa["Octahedron"]*8;
 ans=ans+aa["Dodecahedron"]*12;
 cout<<ans;
}