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
    {
        cin>>arr[i];
    }
    int ans[n+1][3];
    memset(ans,0,sizeof ans);
    for(int i=1;i<=n;i++)
    {
        ans[i][0]=max(ans[i-1][0],max(ans[i-1][1],ans[i-1][2]));
        if(arr[i-1]==1||arr[i-1]==3)
        {
            ans[i][1]=max(ans[i-1][0]+1,ans[i-1][2]+1);
        }
        if(arr[i-1]==2||arr[i-1]==3)
        {
            ans[i][2]=max(ans[i-1][0]+1,ans[i-1][1]+1);
        }
    }
    cout<<n-max(ans[n][0],max(ans[n][1],ans[n][2]))<<"\n";
}