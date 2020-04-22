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
    string s;
    cin>>s;
    int arr[3][3];
    memset(arr,0,sizeof arr);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            arr[i%3][0]++;
        }
        else if(s[i]=='G')
        {
            arr[i%3][1]++;
        }
        else
        {
            arr[i%3][2]++;
        }
    }
    string order[]={"RGB","RBG","BGR","BRG","GBR","GRB"};
    int maxx=INT_MIN;
    string final="";
    for(int i=0;i<6;i++)
    {
        int tmp=0;
        if(order[i][0]=='R')
        {
            tmp+=arr[0][0];
        }
        else if(order[i][0]=='G')
        {
            tmp+=arr[0][1];
        }
        else
        {
            tmp+=arr[0][2];
        }
        if(order[i][1]=='R')
        {
            tmp+=arr[1][0];
        }
        else if(order[i][1]=='G')
        {
            tmp+=arr[1][1];
        }
        else
        {
            tmp+=arr[1][2];
        }
        if(order[i][2]=='R')
        {
            tmp+=arr[2][0];
        }
        else if(order[i][2]=='G')
        {
            tmp+=arr[2][1];
        }
        else
        {
            tmp+=arr[2][2];
        }
        if(tmp>maxx)
        {
            maxx=tmp;
            final=order[i];
        }
    }
    int ans=0;
    for(int i=0;i<min(n,3);i++)
    {
        if(s[i]!=final[i])
        {
            ans++;
            s[i]=final[i];
        }
    }
    for(int i=3;i<n;i++)
    {
        if(s[i]!=s[i-3])
        {
            ans++;
            s[i]=s[i-3];
        }
    }
    cout<<ans<<"\n";
    cout<<s<<"\n";
}