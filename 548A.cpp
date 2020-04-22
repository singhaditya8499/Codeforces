#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    string s;
    int k,n;
    cin>>s>>k;
    n = s.size();
    int len = n/k;
    for(int i=0;i<n;i++)
        if(n % k or s[i] != s[(i/len) * len + len - 1 - (i % len)]){
            cout << "NO" << endl;
            return 0;
        }
    cout << "YES" << endl;
    return 0;
}