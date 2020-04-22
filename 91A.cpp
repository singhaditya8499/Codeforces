#include<bits/stdc++.h>
using namespace std;
 #define rep(i,a,b) for(int i=a;i<b;i++)
#define F first
#define S second
#define pb push_back
#define Pi 3.141592653589793
#define MOD (1e9 + 7)
// For i/o
#define sd1(a) scanf("%d",&a)
#define sd2(a,b) scanf("%d %d",&a,&b)
#define sd3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sf scanf
#define pf printf
// For debugging
#define deb(a) printf("deb%d\n",a)
 typedef pair<int,int> ii;
typedef long long ll;
 vector<int> vec[30];
int main()
{
 string s1,s2;
 cin >> s1 >> s2;
 int len1, len2 ;
 len1 = s1.length();
 len2 = s2.length();
 int ans = 1;
 for(int i=0; i<len1; i++)
  vec[s1[i] - 'a'].push_back(i);
 int curr = -1;
 for(int i=0; i<len2; i++)
 {
  if(vec[s2[i] - 'a'].size() == 0)
  {
   ans = -1;
   break;
  }
  else
  {
   int ch = s2[i] - 'a';
   int pos = upper_bound(vec[ch].begin(), vec[ch].end(), curr) - vec[ch].begin();
   if(pos == vec[ch].size())
   {
    ans += 1;
    curr = -1;
    int pos1 = upper_bound(vec[ch].begin(), vec[ch].end(), curr) - vec[ch].begin();
    curr = vec[ch][pos1];
   }
   else
    curr =  vec[ch][pos];
  }
 }
 if(ans == -1)printf("%d\n",-1);
 else printf("%d\n",ans);
 return 0;
}