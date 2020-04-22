#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x;
    int ans=1,ma=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        int tmp;
        if(x%m==0)
        {
            tmp=x/m;
        }
        else
        tmp=1+x/m;
                if(tmp>=ma)
        {
            ma=tmp;
            ans=i;
        }
    }
    cout<<ans;
 return 0 ;
}