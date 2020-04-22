#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    if((arr[0]+arr[1]>arr[2])||(arr[1]+arr[2]>arr[3]))
    {
        cout<<"TRIANGLE\n";
    }
    else if((arr[0]+arr[1]==arr[2])||(arr[1]+arr[2]==arr[3]))
    {
        cout<<"SEGMENT\n";
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
    }
}