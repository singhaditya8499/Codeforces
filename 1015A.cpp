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
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[m+1];
    memset(arr,0,sizeof arr);
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        arr[l-1]+=1;
        arr[r]+=-1;
    }
    //for(int )
    for(int i=m-1;i>=0;i--)
    {
        arr[i]=arr[i]+arr[i+1];
        //cout<<"hello";
        //cout<<arr[i]<<" ";
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
        if(arr[i]==0)
            cnt++;
    cout<<cnt<<"\n";
    for(int i=1;i<=m;i++)
        if(arr[i]==0)
        cout<<i<<" ";
}