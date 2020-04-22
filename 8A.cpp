#include <iostream>
#include <string>
#include <algorithm>
 using namespace std;
 int main()
{
 string s, a, b, ans[] = { "fantasy", "backward", "forward", "both" };
 cin >> s >> a >> b;
 int t = s.find(a), c = 0;
 if (t != -1) t = s.find(b, t + a.size());
 c += (t == -1 ? 0 : 2);
 reverse(s.begin(), s.end());
 t = s.find(a);
 if (t != -1) t = s.find(b, t + a.size());
 c += (t == -1 ? 0 : 1);
 cout << ans[c];
}