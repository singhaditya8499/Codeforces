#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool isprime(int n)
{
    if(n==1)
        return false;
    if(n<=3)
        return true;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        int cnt=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(isprime(j))
                    cnt++;
            }
        }
        if(cnt==2)
            ans++;
        //cout<<i<<" "<<cnt<<"\n";
    }
    cout<<ans<<"\n";
}