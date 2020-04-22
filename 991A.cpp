#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if((a+b-c+1)>n||(c>a)||(c>b))
        cout<<"-1\n";
    else
        cout<<n-a-b+c<<"\n";
}