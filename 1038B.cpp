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
int main()
{
    int n;
    cin>>n;
    if(n==1||n==2)
    {
        cout<<"No\n";
        return 0;
    }
    if(n%2==0)
    {
        cout<<"Yes\n";
        vector<int> v;
        int i=1,j=n;
        while(i<j)
        {
            v.push_back(i);
            if(i!=j)
            v.push_back(j);
            i+=2;
            j-=2;
        }
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        v.clear();
        cout<<endl;
        i=2;
        j=n-1;
        while(i<j)
        {
            v.push_back(i);
            if(i!=j)
            v.push_back(j);
            i+=2;
            j-=2;
        }
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    else
    {
        if((1+n)%((n/2)+1)!=0)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
            vector<int> v;
            int i=1,j=n;
            while(i<=j)
            {
                v.push_back(i);
                if(i!=j)
                v.push_back(j);
                i+=2;
                j-=2;
            }
            cout<<v.size()<<" ";
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            v.clear();
            cout<<endl;
            i=2;
            j=n-1;
            while(i<=j)
            {
                v.push_back(i);
                if(i!=j)
                v.push_back(j);
                i+=2;
                j-=2;
            }
            cout<<v.size()<<" ";
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;    
        }
    }
}