#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50 + 10;
const int DIR_X[] = {0, 1, 0, -1};
const int DIR_Y[] = {1, 0, -1, 0};
 int n, m;
char board[MAXN][MAXN];
bool visit[MAXN][MAXN];
 bool dfs(int x, int y, char color, int fx, int fy) {
    visit[x][y] = true;
    for (int k = 0; k < 4; ++k) {
        int tx = x + DIR_X[k];
        int ty = y + DIR_Y[k];
        if (0 <= tx && tx < n) {
            if (0 <= ty && ty < m) {
                if (board[tx][ty] == color) {
                    if (tx != fx || ty != fy) {
                        if (visit[tx][ty]) {
                            return true;
                        }
                        if (dfs(tx, ty, color, x, y)) {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
 int main() {
    while (cin >> n >> m) {
        for (int i = 0; i < n; ++i) {
            cin >> board[i];
        }
        memset(visit, false, sizeof(visit));
        bool circle = false;
        for (int i = 0; i < n && !circle; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!visit[i][j]) {
                    if (dfs(i, j, board[i][j], -1, -1)) {
                        circle = true;
                        break;
                    }
                }
            }
        }
        cout << (circle ? "Yes" : "No") << endl;
    }
    return 0;
}