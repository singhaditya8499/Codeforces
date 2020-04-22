#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <climits>
#include <cctype>
#include <utility>
#include <queue>
#include <cmath>
#include <complex>
using namespace std;
 typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef pair<LL, LL> PLL;
typedef pair<int, LL> PIL;
typedef pair<LL, int> PLI;
typedef double DB;
 #define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x.size()))
#define cnti(x) (__builtin_popcount(x))
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x))
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x))
#define ctzl(x) (__builtin_ctzll(x))
 #define X first
#define Y second
 #define Error(x) cout << #x << " = " << x << endl
 template <typename T, typename U> 
inline void chkmax(T& x, U y) {
  if (x < y) x = y;
}
 template <typename T, typename U>
inline void chkmin(T& x, U y) {
  if (y < x) x = y;
}
 const int MAXN = 111111;
 vector<int> V;
vector<int> adj[MAXN];
vector<int> b[MAXN];
 int n, m, Q;
int dis[MAXN], e[MAXN], c[MAXN], chk[MAXN], vis[MAXN];
int f[MAXN];
 inline int get(int u) {
  return f[u] == 0 ? u : f[u] = get(f[u]);
}
 void dfs(int u, int d) {
  chk[u] = 1, dis[u] = d;
  for (int i = 0; i < sz(adj[u]); i++) {
    int j = adj[u][i], v = e[j] ^ u, w = c[j];
    if (!chk[v]) {
      vis[j] = 1, dfs(v, d ^ w);
    } else if (!vis[j]) {
      V.push_back(dis[u]^dis[v]^w);
    }
  }
}
 void solve(int u) {
  int j = 0;
  for (int i = 0; j < sz(V) && i < 30; i++) {
    for (int k = j; k < sz(V); k++) {
      if (V[k]>>(29-i) & 1) {
        if (k > j) {
          swap(V[j], V[k]);
          break;
        }
      }
    }
    if (V[j]>>(29-i) & 1) {
      for (int k = 0; k < sz(V); k++) {
        if (k != j) {
          if (V[k]>>(29-i) & 1) {
            V[k] ^= V[j];
          }
        }
      }
      j++;
    }
  }
  if (j < sz(V)) {
    V.resize(j);
  }
  b[u] = V;
}
 int main() {
   cin >> n >> m;
  Q=1;
  for (int i = 0; i < m; i++) {
    int u, v, w; scanf("%d%d%d", &u, &v, &w);
    int x = get(u), y = get(v);
    if (x != y) {
      f[x] = y;
    }
    adj[u].push_back(i);
    adj[v].push_back(i);
    c[i] = w, e[i] = u ^ v;
  }
  for (int i = 1; i <= n; i++) {
    if (get(i) == i) {
      V.clear();
      dfs(i, 0);
      solve(i);
    }
  }
  for (int i = 0; i < Q; i++) {
    int u=1, v=n; 
 //scanf("%d%d", &u, &v);
    int x = get(u), y = get(v);
    if (x != y) {
      puts("XIT");
      continue;
    }
    int ans = dis[u]^dis[v];
    for (int l = 29; l >= 0; l--) {
      for (int k = 0; k < sz(b[x]); k++) {
        if ((ans ^ b[x][k]) < ans) {
          ans ^= b[x][k];
          break;
        }
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}