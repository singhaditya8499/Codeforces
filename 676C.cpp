#include<bits/stdc++.h>
#include<string>
using namespace std;
 typedef long long ll;
typedef pair<int, int> ii;
#define pb(x)                        push_back(x)
#define endl                         '\n'
#define INF                         (int)1e9
int mod = 1000000007;
 #define N        100005
 int main()
{
      std::ios::sync_with_stdio(false);
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
       int lo = 0, hi = 0;
      int ans = 1;
            int a = 0;
      int b = 0;
      if(s[0] == 'a')
            a++;
      else
            b++;
       for (int i = 1; i < n; ++i)
      {
            if(s[i] == 'a')
                  a++;
            else
                  b++;
            if(a >= b)
            {
                  if(b > k){
                        if(s[lo] == 'a')
                              a--;
                        else
                              b--;
                        lo++;
                  }
            }
            else
            {
                  if( a > k)
                  {
                        if(s[lo] == 'a')
                              a--;
                        else
                              b--;
                        lo++;
                  }
            }
            ans = max(ans, i-lo+1);
      }
      cout<<ans;
}