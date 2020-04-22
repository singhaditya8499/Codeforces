#include <iostream>
#include<set>
using namespace std;
 int main() {
 // your code goes here
    string s,t,ans;
    cin>>s>>t;
    for(int i=s.length()-1;i>=0;i--)
    ans=ans+s[i];
    if(ans==t)
    cout<<"YES";
    else
    cout<<"NO";
 return 0;
}