#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
#define mod 1000000007
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
typedef long long ll;
using namespace std;
  int main()
{
    string s;
    cin>>s;
    int cnt=0,k;
    cin>>k;
    int i;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0')
            cnt++;
        if(cnt>=k)
            break;
    }
    if(cnt<k)
        cout<<s.length()-1<<"\n";
    else
    {
        int yes=0;
        for(int j=0;j<i;j++)
            if(s[j]!='0')
            {
                yes=1;
                break;
            }
        if(!yes)
            cout<<s.length()-1<<"\n";
        else
            cout<<s.length()-i-k<<"\n";
    }
}