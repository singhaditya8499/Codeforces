#include "iostream"
#include "climits"
#include "vector"
#include "algorithm"
#define int long long
using namespace std;
struct _ { _() { cin.sync_with_stdio(0), cin.tie(0); } }_;
 signed main()
{
 int n; cin >> n;
 int a[n]; pair <int, int> xmin = {0, INT_MAX}, xmax = {0, INT_MIN};
 for (int i=0; i<n; i++)
 {
  cin >> a[i];
  if (a[i]>xmax.second) xmax = {i, a[i]};
  if (a[i]<xmin.second) xmin = {i, a[i]};
 }
 cout << max({abs(xmin.first-xmax.first), xmin.first, n-xmin.first-1, xmax.first, n-xmax.first-1});
return 0;
    }