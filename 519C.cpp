#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int main() {
    scanf("%d%d", &n, &m);
     for (int i = 0; i <= n; i++) {
        int cur = i;
        int leftn = n - i;
        int leftm = m - 2 * i;
         if (leftm >= 0) {
            cur += min(leftm, leftn / 2);
            ans = max(ans, cur);
        }
    }
     printf("%d\n", ans);
        return 0;
}