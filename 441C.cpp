#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
bool cmp(pair<ll,int> a,pair<ll,int> b)
{
    if(a.first!=b.first)
    return a.first<b.first;
     return a.second>=b.second;
}
 int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int curx=1,cury=1,dir=1;
    int kk=2;
    for(int i=0;i<k;i++)
    {
        if(i==k-1)
        {
            int len=n*m-kk*(k-1);
            cout<<len<<" ";
            while(len--)
            {
                cout<<curx<<" "<<cury<<" ";
                cury+=dir;
                if(cury==m+1)
                {
                    cury=m;
                    curx++;
                    dir=-1;
                }
                if(cury==0)
                {
                    cury=1;
                    curx++;
                    dir=1;
                }
            }
        }
        else
        {
            cout<<kk<<" ";
            int len=kk;
            while(len--)
            {
                cout<<curx<<" "<<cury<<" ";
                cury+=dir;
                if(cury==m+1)
                {
                    cury=m;
                    curx++;
                    dir=-1;
                }
                if(cury==0)
                {
                    cury=1;
                    curx++;
                    dir=1;
                }
            }
            cout<<endl;
        }
    }
    cout<<endl;
}