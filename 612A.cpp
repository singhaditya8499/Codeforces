#include <bits/stdc++.h>
using namespace std;
struct _ { ios_base::Init _i; _() { cin.sync_with_stdio(0); cin.tie(0); } } _;
      #define endl '\n'
    #define int intmax_t
    #define in(x) for (auto& i: x)
   signed main()
{
     int c, a, b, d, e, f=0;
    cin >> c >> a >> b;
    string x;
    cin >> x;
    for (int i=0; i<=c; i++)
    {
        if ((c-(a*i))%b==0)
        {
            d=i;
            e=(c-(a*i))/b;
            if (d>=0 && e>=0)
            {
                f=1;
                break;
            }
            else continue;
        }
    }
    int i=0, j;
    if (!f) cout << -1;
    else
    {
        cout << d+e << endl;
        for (j=1; j<=a*d; i++, j++)
        {
            cout << x[i];
            if (j%a==0) cout << endl;
        }
        for (j=1; j<=b*e; i++, j++)
        {
            cout << x[i];
            if (j%b==0) cout << endl;
        }
    }
 }