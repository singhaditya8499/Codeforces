#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    string s = to_string(t);
//    put(sz(s),n);
    if(int(s.size())>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<t;
    n -= s.length();
    while(n--)
    {
        cout<<0;
    }
    cout<<endl;
    return 0;
}