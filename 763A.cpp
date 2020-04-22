#include <bits/stdc++.h>
using namespace std;
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forab(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define _ cin.tie(0); ios_base::sync_with_stdio(0);
#define i64 long long
const int N = 100010;
vector<int> g[N];
int n, curr_color, color[N];
bool ok;
 bool dfs(int v, int parent) {
    ok = ok && (color[v] == curr_color);
    forn(i, g[v].size()) {
        if (g[v][i] != parent)
            dfs(g[v][i], v);
    }
}
 bool solve(int v) {
    int ans = true;
    forn(i, g[v].size()) {
        curr_color = color[g[v][i]];
        ok = true;
        dfs(g[v][i], v);
        ans = ans && ok;
    }
    return ans;
}
 int main() {
    cin >> n;
    forn(i, n - 1) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    forn(i, n) cin >> color[i + 1];
    int root1 = -1, root2 = -1;
    forab(i, 1, n + 1) {
        for (auto elem : g[i]) {
            if (color[elem] != color[i]) {
                root1 = elem;
                root2 = i;
            }
        }
    }
    if (root1 == -1) {
        cout << "YES\n1";
        return 0;
    }
    bool res1 = solve(root1);
    bool res2 = solve(root2);
    if (res1)
        cout << "YES\n" << root1;
    else if (res2)
        cout << "YES\n" << root2;
    else
        cout << "NO";
    return 0;
}