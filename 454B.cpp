#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(b.second!=a.second)
        return a.second<b.second;
    return a.first<b.first;
}
int ans,n;
int xa[]={1,0,-1,0};
int ya[]={0,1,0,-1};
int main()
{
    int n;
    cin >> n;
     int mark = 1;
    int k;
    int a[n];
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            mark--;
            k = i;
        }
    }
     if (mark == 1)
    {
        cout << 0;
    }
    else if (mark == 0 && a[n - 1] <= a[0])
    {
        cout << (n - k);
    }
    else
    {
        cout << -1;
    }
     return 0;
}