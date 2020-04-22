#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <bitset>
#include <iterator>
#include <iomanip>
 #define mod 1000000007
#define lli long long int
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
 #define pii pair<int, int>
#define pll pair<lli, lli>
#define pic pair<int, char>
 using namespace std;
 string convert(string s)
{
 int l = s.length();
 string ans = "";
 for(int i=0;i<l;i++)
 {
  if(s[i]=='-' || s[i]=='_' || s[i]==';')
   continue;
  else
   ans += tolower(s[i]);
 }
 return ans;
}
 int main()
{
 ios::sync_with_stdio(false);
  string str1, str2, str3;
 cin>>str1>>str2>>str3;
  int l1, l2, l3;
 str1 = convert(str1);
 str2 = convert(str2);
 str3 = convert(str3);
  set<string> perm;
 perm.insert(str1+str2+str3);
 perm.insert(str1+str3+str2);
 perm.insert(str2+str1+str3);
 perm.insert(str2+str3+str1);
 perm.insert(str3+str2+str1);
 perm.insert(str3+str1+str2);
  int n;
 cin>>n;
 string str;
 for(int i=0;i<n;i++)
 {
  cin>>str;
  str = convert(str);
  if(perm.find(str)!=perm.end())
   cout<<"ACC"<<endl;
  else
   cout<<"WA"<<endl;
 }
  return 0;
}