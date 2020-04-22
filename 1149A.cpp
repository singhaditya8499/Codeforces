#include<bits/stdc++.h>
#include<unordered_map>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
 void generate(vector<int> &prime)
{
    int arr[200007];
    memset(arr,0,sizeof arr);
    for(int i=2;i*i<=200006;i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            for(int j=i*2;j<=200006;j+=i)
            arr[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> prime;
    generate(prime);
    int n;
    cin>>n;
    int arr[n];
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        cnt1++;
        else
        cnt2++;
    }
    int sum=0;
    int next=0;
    if(cnt2)
    {
        cout<<2<<" ";
        cnt2--;
        sum+=2;
    }
    if(sum>=prime[next])
    next++;    
    while(cnt1||cnt2)
    {
        if(cnt2)
        {
            if(prime[next]-sum>=2)
            {
                cout<<2<<" ";
                cnt2--;
                sum+=2;
            }
            else if(cnt1)
            {
                cout<<1<<" ";
                cnt1--;
                sum+=1;
            }
            else
            {
                cout<<2<<" ";
                cnt2--;
                sum+=2;
            }
            if(sum>=prime[next])
            next++;
        }
        else
        {
            while(cnt1)
            {
                cnt1--;
                cout<<1<<" ";
            }
        }
    }
    cout<<endl;
}