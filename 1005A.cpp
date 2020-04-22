#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cnt=0;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        cnt++;
        int cur=1;
        int j=i+1;
        while(arr[j]-1==cur)
        {
            j++;
            cur++;
        }
        ans.push_back(j-i);
        i=j-1;
    }
    cout<<cnt<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}