#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
// using namespace __gnu_pbds;
 int main()
{
    int n;
    cin>>n;
    double r;
    cin>>r;
    vector<pair<double,double> > v;
    double x,y;
    cin>>x;
    y=r;
    v.push_back(make_pair(x,y));
    for(int i=1;i<n;i++)
    {
        cin>>x;
        double maxy=-1;
        for(int j=0;j<v.size();j++)
        {
            if(abs(v[j].first-x)<=2.0*r)
            {
                maxy=max(sqrt(4.0*r*r-pow(abs(v[j].first-x),2))+v[j].second,maxy);
            }
            // cout<<j<<" "<<maxy<<"\n";
        }
        // cout<<maxy<<"\n";
        if(maxy==-1)
            v.push_back(make_pair(x,r));
        else
        v.push_back(make_pair(x,maxy));
    }
    for(int i=0;i<n;i++)
        printf("%0.9f ",v[i].second);
    cout<<endl;
}