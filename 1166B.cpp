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
    int n;
    cin>>n;
    int yes=-1;
    int row=-1,col=-1;
    for(int i=5;i<=n;i++)
    {
        if(n%i==0&&(n/i)>=5)
        {
            row=i;
            col=n/i;
            yes=1;
            break;
        }
    }
    if(yes==-1)
    {
        cout<<yes<<"\n";
        return 0;
    }
    string ans="";
    string tmp="aeiou";
    // cout<<row<<" "<<col<<"\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            ans=ans+tmp[(i+j)%5];
        }
    }
    cout<<ans<<"\n";
}