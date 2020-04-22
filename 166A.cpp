#include <iostream>
#include <algorithm>
 using namespace std;
 const int maxn = 50 + 10;
 class CRank
{
public:
    int p;
    int t;
};
 bool cmp(const CRank &ra, const CRank &rb)
{
    if(ra.p == rb.p) return ra.t < rb.t;
    else return ra.p > rb.p;
}
 int main()
{
    CRank r[maxn];
    int n, k, i;
    while(cin>>n>>k)
    {
        for(i = 0; i < n; i++)
            cin>>r[i].p>>r[i].t;
        sort(r, r+n, cmp);
        int cnt = 0;
        for(i = 0; i < n; i++)
            if(r[i].p == r[k-1].p && r[i].t == r[k-1].t)
                cnt++;
        cout<<cnt<<endl;
    }
     return 0;
}