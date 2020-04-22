#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
 int main()
{
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
     int x;
     cin>>x;
     a[i].first=x;
     a[i].second=i+1;
    }
    sort(a,a+n);
    for(int i=0,j=n-1;i<j;i++,j--)
    {
     cout<<a[i].second<<" "<<a[j].second<<endl;
    }
    return 0;
}