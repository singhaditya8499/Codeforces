#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
 int main()
{
    string s;
    cin>>s;
    long long counter=0 ,r=0 ;
    for(int i=0 ; i<s.size() ; i++ )
    {
        if(s.substr(i , 5)=="heavy"){counter++;}
        if(s.substr(i , 5)=="metal"){r+=counter;}
    }
    cout<<r;
    return 0;
}