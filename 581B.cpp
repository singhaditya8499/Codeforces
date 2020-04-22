#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n; cin >> n;
    int h[n];
    for(int i = 0; i < n; ++i)
        cin >> h[i];
    int mx[n];
    mx[n-1] = h[n-1];
    for(int i = n-2; i >= 0; --i)
        mx[i] = max(mx[i+1], h[i]);
    for(int i = 0; i < n-1; ++i)
        cout << (h[i] > mx[i+1] ? 0 : abs(mx[i]-h[i])+1) << ' ';
    cout << 0 ;
}