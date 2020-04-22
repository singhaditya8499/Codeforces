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
    int n,k;
    cin>>n>>k;
    int sum=0;
    int arr[n];
   // int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        k=k-min(sum,8);
        sum-=min(sum,8);
        if(k<=0)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    }