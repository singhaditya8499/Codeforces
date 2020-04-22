#include<bits/stdc++.h>
using namespace std;
 int n;
vector<int> a[100001];
 double dfs(int i, int p)
{
    double v=0, c=0;
    for(int j:a[i])
        if(j-p)
            v += dfs(j,i), c++;
    return c ? v/c+1 : 0;       
}
 int main()
{
    cin >> n;
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cout << setprecision(15) << dfs(1,0);
}