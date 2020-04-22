#include <bits/stdc++.h>
 using namespace std;
 const int N = 5000;
int n, a[N];
 int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    int s = 0, res = 0;
    while (true) {
        for (int i = 0; i < n; ++i)
            if (a[i] <= s) a[i] = n + 1, s++;
        if (s == n) break;
        res++;
        for (int i = n - 1; i >= 0; --i)
            if (a[i] <= s) a[i] = n + 1, s++;
        if (s == n) break;
        res++;
    }
    cout << res << endl;
    return 0;
}