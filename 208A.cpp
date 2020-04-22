#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,i;
    cin>>s;
    n=s.length();
    for(i=0;i<n-2;i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s[i]='*';
            s[i+1]='*';
            s[i+2]=' ';
        }
    }
    for(i=0;i<n;i++)
    {
         if(s[i]!='*')
            cout<<s[i];
    }
    return 0;
}