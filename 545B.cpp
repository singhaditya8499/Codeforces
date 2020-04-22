#include <bits/stdc++.h>
using namespace std;
 int main()
{
int i ,cnt=0;
string a,b,c; cin>>a>>b;
for(i=0;i<a.size();i++)
{
 if(a[i]!=b[i]) cnt++;
 if(cnt%2==0) a[i]=b[i];
}
if(cnt%2!=0) cout<<"impossible";
else cout<<a;
}