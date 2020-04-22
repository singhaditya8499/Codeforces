#include <bits/stdc++.h>
 using namespace std;
  int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int column = 1; column <= n; ++column) {
        int x = 1, y = column;
        for (int j = 1; j <= n; ++j) {
            cout << (x - 1) * n + y << " ";
            ++x;
            ++y;
            if (x == n + 1) x -= n;
            if (y == n + 1) y -= n;
        }
        cout << endl;
    }
    return 0;
}