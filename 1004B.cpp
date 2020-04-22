#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    pair<int,int> arr[m];
    int ma=-1;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i].first>>arr[i].second;
        arr[i].first--;
        arr[i].second--;
        ma=max(ma,arr[i].second);
    }
    string s,ss;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+'0';
            ss=ss+'1';
        }
        else
        {
            s=s+'1';
            ss=ss+'0';
        }
    }
    int sum=0,sum1=0;
    for(int i=0;i<m;i++)
    {
        int rcnt=0,lcnt=0,rcnt1=0,lcnt1=0;
        for(int j=arr[i].first;j<=arr[i].second;j++)
        {
            if(s[j]=='0')
                rcnt++;
            else
                lcnt++;
             if(ss[j]=='0')
                rcnt1++;
            else
                lcnt1++;
        }
        sum+=rcnt*lcnt;
        sum1+=rcnt1*lcnt1;
    }
    //cout<<sum<<" "<<sum1<<"\n";
    if(sum>sum1)
        cout<<s;
    else
        cout<<ss;
}