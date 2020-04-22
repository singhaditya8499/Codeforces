#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
 bool cmp(int a,int b)
{
    return a>b;
}
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
     return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int> s;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int brr[n];
    for(int i=0;i<n;i++)
        cin>>brr[i];
    cout<<"Karen\n";
}