#include <cstring>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <string>
using namespace std;
 const int N = 110000;
int v[N];
char s[N];
 //bool cmp (int x, int y) { return a[x] < a[y]; }
   int main () {
//    freopen ("in.txt", "r", stdin);
    int n, all = 0;
    cin >> n;
    scanf ("%s", s);
    for (int i = 0; i < n; i++) {
        if (!v[s[i]]) { v[s[i]] = 1; all++; }
    }
    memset (v, 0, sizeof v);
    int cnt = 0, res = n;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && cnt != all) {
            if (!v[s[j]]) cnt++;
            v[s[j]]++;
            j++;
        }
        if (cnt == all) res = min (res, j - i);
        v[s[i]]--;
        if (v[s[i]] == 0) cnt--;
    }
    cout << res << endl;
}