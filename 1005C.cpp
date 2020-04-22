#include<iostream>
#include<cmath>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long arr[n];
    map<long long,vector<int> > m;
    int chk[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        chk[i]=0;
        for(int j=1;j<=32;j++)
        {
            if(pow(2,j)>arr[i])
            {
                m[pow(2,j)-arr[i]].push_back(i);
            }
        }
    } 
    for(int i=0;i<n;i++)
    {
        if(chk[i]==1)
            continue;
        if(m.find(arr[i])!=m.end())
        {
            for(int j=0;j<m[arr[i]].size();j++)
            {
                //cout<<"hii"<<i<<" ";
                if(m[arr[i]][j]!=i)
                {
                    chk[m[arr[i]][j]]=1;
                    chk[i]=1;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
        if(chk[i]==0)
        {
            ans++;
            //cout<<arr[i]<<" ";
        }
     cout<<ans;
}