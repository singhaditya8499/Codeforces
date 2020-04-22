#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void generate(string s,vector<int>&gen,int len)
{
    if(len==7)
        return;
    int x;
    stringstream geek(s+'0');
    geek>>x;
    gen.push_back(x);
    generate(s+'0',gen,len+1);
    stringstream geek1(s+'1');
    geek1>>x;
    gen.push_back(x);
    generate(s+'1',gen,len+1);
 }
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first>b.first)
        return true;
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int x=arr[n-1];
    //arr[n-1]=-1;
    int ans=1;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            int cur=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==i)
                {
                    cur=1;
                    arr[j]=-1;
                    break;
                }
            }
            if(cur==0)
            {
                ans=0;
                break;
            }
        }
    }
    sort(arr,arr+n);
    int y=arr[n-1];
    if(y==-1)
    {
        ans=0;
    }
    for(int i=1;i<=y;i++)
    {
        if(y%i==0)
        {
            int cur=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==i)
                {
                    cur=1;
                    arr[j]=-1;
                    break;
                }
            }
            if(cur==0)
            {
                ans=0;
                break;
            }
        }
    }
    if(ans)
    {
        cout<<x<<" "<<y<<"\n";
    }
    else
    {
        cout<<-1<<"\n";
    }
}