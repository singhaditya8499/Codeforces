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
    double x,y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"=\n";
        return 0;
    }
    double left=y*log2(x);
    double right=x*log2(y);
    if(left<right)
        cout<<"<\n";
    else if(left>right)
        cout<<">\n";
    else
        cout<<"=\n";
}