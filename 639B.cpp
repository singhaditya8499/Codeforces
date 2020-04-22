#include<iostream>
#include<queue>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<cctype>
#include<stack>
#include<set>
#include<utility>
using namespace std;
 //**************//
typedef unsigned long long ull;
//**************//
 int main()
{
 int n,d,h;
 cin>>n>>d>>h;
 if(h*2<d||(d==1&&n>=3))
 {
  cout<<-1<<"\n";
  return 0;
 }
 int i=2,c=0,last=1;
 vector<pair<int,int> > ans;
 while(c<h)
 {
  ans.push_back(make_pair(last,i));
  i++;
  last++;
  c++;
 }
 last=1,c=0;
 while(c<(d-h))
 {
  ans.push_back(make_pair(last,i));
  last=i;
  i++;
  c++;
 }
 while(i<=n)
 {
  ans.push_back(make_pair(h,i));
  i++;
 }
 for(int i=0;i<ans.size();i++)
  cout<<ans[i].first<<" "<<ans[i].second<<"\n";
}