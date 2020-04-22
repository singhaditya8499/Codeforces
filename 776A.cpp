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
    string a,b;
    cin>>a>>b;
    vector<string>taken;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" "<<b<<endl;
        string c,d;
        cin>>c>>d;
        if(c==a)a=d;
        else b=d;
    }
    cout<<a<<" "<<b<<endl;
}