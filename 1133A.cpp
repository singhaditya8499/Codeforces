#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(b.second!=a.second)
        return a.second<b.second;
    return a.first<b.first;
}
int ans,n;
int xa[]={1,0,-1,0};
int ya[]={0,1,0,-1};
int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    int c,d;
    scanf("%d:%d",&c,&d);
    int totala=a*60+b;
    int totalb=c*60+d;
    int total=(totala+totalb)/2;
    if(total/60<=9)
    {
        cout<<"0"<<total/60<<":";
    }
    else
        cout<<total/60<<":";
    if(total%60<=9)
        cout<<"0"<<total%60<<"\n";
    else
        cout<<total%60<<"\n";
    // cout<<total/60<<":"<<total%60<<"\n";
}