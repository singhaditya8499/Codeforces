#include <bits/stdc++.h>
 using namespace std;
 #define sd(x) scanf("%d", &x)
#define boost ios_base::sync_with_stdio(false);
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define f first
#define s second
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
  cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
  const char* comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << " : " << arg1<<" | ";
  __f(comma+1, args...);
}
#else
#define trace(...)
#endif
 typedef pair <int, int> pii;
typedef long long ll;
typedef vector <vector <ll>> matrix;
 const int mod = 1000000007;
const int inf = 50000000;
const int maxn = 100010;
 ll n;
int len;
string k;
 int main() {
 // freopen("i.txt", "r", stdin);
 // freopen("o.txt", "w", stdout);
 boost;
 cin.tie(NULL);
 cin >> n >> k;
 len = k.size();
 ll ans = 0;
 ll m = 1;
 for (int i = len - 1; i >= 0; ) {
  ll tmp = 0;
  int j = i;
  ll mf = 1;
  while (j >= 0 && mf <= n) {
   ll tt = mf * (k[j] - '0') + tmp;
   if (tt >= n) {
    break;
   }
   j -= 1;
   mf *= 10;
   tmp = tt;
  }
  int mm = j + 1;
  while (mm <= i) {
   if (k[mm] != '0') {
    break;
   }
   mm += 1;
  }
  if (mm > i) {
   i -= 1;
  }
  else {
   i = mm - 1;
  }
  // trace(j, mm);
  // trace(m, tmp);
  ans += (m * tmp);
  m *= n;
 }
 cout << ans << "\n";
 return 0;
}