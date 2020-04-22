#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000000+7;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
     int n;
     cin>>n;
     string s;
     cin>>s;
     for (int i=0;i<s.size();)
    {
        if (i+2>=s.size()||s[i]!='o'||s[i+1]!='g'||s[i+2]!='o') {cout<<s[i];i++;}
        else {
            cout<<"***";
            i++;
        while (i+1<s.size()&&s[i]=='g'&&s[i+1]=='o'){i+=2;}
         }
    }
     return 0;
  }