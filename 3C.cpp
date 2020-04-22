#include<bits/stdc++.h>
using namespace std;
 int main()
{
    string s[3];
    for(int i=0;i<3;i++)
    cin>>s[i];
    int cntx=0,cntz=0,ill=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(s[i][j]=='X')
                cntx++;
            if(s[i][j]=='0')
                cntz++;
            if(s[i][j]=='X'||s[i][j]=='0'||s[i][j]=='.')
            {
             }
            else
                ill=0;
        }
    }
    if(ill==0)
    {
        cout<<"illegal\n";
        //cout<<1;
        return 0;
    }
    if(abs(cntx-cntz)>1||cntz>cntx)
    {
        cout<<"illegal";
        //cout<<2;
        return 0;
    }
    int win1=0,win2=0;
    for(int i=0;i<3;i++)
    {
        if(s[i][0]==s[i][1]&&s[i][1]==s[i][2]&&s[i][0]=='X')
            win1=1;
        if(s[0][i]==s[1][i]&&s[1][i]==s[2][i]&&s[0][i]=='X')
            win1=1;
        if(s[i][0]==s[i][1]&&s[i][1]==s[i][2]&&s[i][0]=='0')
            win2=2;
        if(s[0][i]==s[1][i]&&s[1][i]==s[2][i]&&s[0][i]=='0')
            win2=2;
         //cout<<win1<<" "<<win2<<" ";
    }
    //cout<<win1<<" "<<win2<<" ";
    if(win1==0||win2==0)
    {
        if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[1][1]=='X')
        {
            win1=1;
        }
        if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[1][1]=='0')
        {
            win2=2;
        }
        if(s[2][0]==s[1][1]&&s[1][1]==s[0][2]&&s[1][1]=='0')
        {
            win2=2;
        }
        if(s[2][0]==s[1][1]&&s[1][1]==s[0][2]&&s[1][1]=='X')
        {
            win1=1;
        }
    }
    //cout<<win1<<" "<<win2<<" ";
    if(cntx>cntz&&win2!=0)
    {
        cout<<"illegal";
        //cout<<3;
        return 0;
    }
    if(cntx==cntz&&win1!=0)
    {
        cout<<"illegal";
        //cout<<4;
        return 0;
    }
    if(cntx==cntz&&win1==1&&win2==2)
    {
        cout<<"illegal\n";
        //cout<<5;
        return 0;
    }
    if(win1==0&&win2==0)
    {
        if(cntx+cntz==9)
        {
         cout<<"draw";
         return 0;
  }
  if(cntx>cntz)
        {
            cout<<"second\n";
            return 0;
        }
        if(cntz==cntx)
        {
            cout<<"first\n";
            return 0;
        }
        cout<<"draw";
        return 0;
    }
    if(win1==1)
    {
        cout<<"the first player won\n";
        return 0;
    }
    if(win2==2)
    {
        cout<<"the second player won\n";
        return 0;
    }
}