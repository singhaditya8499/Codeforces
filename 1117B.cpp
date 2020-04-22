#include <bits/stdc++.h>
 using namespace std;
 int main() {
#ifdef _DEBUG
 freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
  int n, m, k;
 cin >> n >> m >> k;
  vector<int> a(n);
 for (int i = 0; i < n; ++i) {
  cin >> a[i];
 }
 sort(a.rbegin(), a.rend());
  cout << m / (k + 1) * 1ll * (a[0] * 1ll * k + a[1]) + m % (k + 1) * 1ll * a[0] << endl;
  return 0;
}