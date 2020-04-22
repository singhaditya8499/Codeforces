#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    if(a.second.second!=b.second.second)
        return a.second.second<b.second.second;
    else
    {
        if(a.first!=b.first)
            return a.first<b.first;
        else
        {
            return a.second.first>b.second.first;
        }
    }
}
 int main()
{
    int n,mas[100005];
 cin >>n;
         for(int i=1;i<=n;i++)
            cin>>mas[i];
         int k = 1;
         int r=n;
        while(mas[k]==0)
        {
            k++;
            r--;
        }
             int e=n;
         while(mas[e]==0)
        {
            e--;
            r--;
        }
                  for(int i=k;i<=e;i++)
        {
            //not true
            //if(mas[i]==0 && mas[i+1]==0) r-=2;
             // true
             if(mas[i-1]==0 && mas[i]==0 && mas[i+1]==0) r-=1;
             else if(mas[i]==0 && mas[i+1]==0) r-=2;
        }
                 if (r<0) r=0;
         cout <<r;
}