#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(pair<char,int> a,pair<char,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    double arr[n];
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int cnt=0,i=0;
    while((sum/n)<4.5)
    {
        sum=sum+(5.0-arr[i]);
        i++;
        cnt++;
    }
    cout<<cnt<<"\n";
}