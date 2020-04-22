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
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int found=0;
        for(int i=0;i<=33;i++)
        {
            for(int j=0;j<=33;j++)
            {
                if(3*i+7*j==x)
                {
                    found=1;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}