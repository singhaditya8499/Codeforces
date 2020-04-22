#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n>>s;
    int ac=0,bc=0;
    for(int i=0;i<s.length();i++)
    {
     if(s[i]=='A')
      ac++;
     else
      bc++;
    }
    if(ac>bc)
     cout<<"Anton";
    else if(bc>ac)
     cout<<"Danik";
    else
     cout<<"Friendship";
    return 0;
}