#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int i;
    cin>>n>>k;
    int a[n];
    int s=0,flag=0;
    double b=k-0.5;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    int j=0;
    int mm=0;
  //  cout<<b*6<<endl;
    while(1)
    {
        double r=b*(n+j);
        double kk=s+mm;
        //cout<<r<<" "<<kk<<endl;
        if(kk>=r)
        {
            flag=1;
            break;
        }
        mm+=k;
        j++;
    }
    cout<<j<<endl;
}