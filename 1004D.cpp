#include<iostream>
#include<vector>
using namespace std;
int mx=0;
const int maxn=1e6+100;
vector<int> freq (maxn, 0);
void chk(int n,int m,int start)
{
    int x=start;
    int y=n+m-x-mx;
    if(x<1||x>n||y<1||y>m)
        return;
    vector<int> tmp (maxn, 0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            tmp[abs(x-i)+abs(y-j)]++;
    }
    if(tmp==freq)
    {
        cout<<n<<" "<<m<<"\n";
        cout<<x<<" "<<y<<"\n";
        exit(0);
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        freq[x]++;
        mx=max(mx,x);
    }
    int start=1;
    while(freq[start]==4*start)
        start++;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            chk(i,n/i,start);
            chk(n/i,i,start);
        }
    }
    cout<<-1<<"\n";
}