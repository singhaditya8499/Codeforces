#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double h,l;
    cin>>h>>l;
    double ans=(l*l-h*h);
    ans=ans/2.0;
    ans=ans/h;
    printf("%0.9f\n",ans);
}