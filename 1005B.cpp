#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int i=a.length()-1;
    int j=b.length()-1;
    int ans=a.length()+b.length();
    while(a[i]==b[j]&&i>=0&&j>=0)
    {
        i--;
        j--;
        ans-=2;
    }
    cout<<ans<<"\n";
}