#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    for (long i=s.size()-1;i>=0; i--) {
        if (s[i]=='z') {
            s[i]='a';
        }
        else {
            s[i]++;
            break;
        }
    }
    if (s==t) {
        cout<<"No such string";
    }
    else {
        cout<<s;
    }
    return 0;
}