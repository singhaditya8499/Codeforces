//c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    char arr[11][11];
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c ; j++)         {             cin>>arr[i][j];
        }
    }
    int co=0; //how many dots
    int res1=0; //1stpart
    int re=0; //how many repeat
    for(int i=0 ; i<r ; i++)
    {
        co=0;
        bool repeat=false; //repeat or not
        for(int j=0 ; j<c ; j++)
        {
            if(arr[i][j]=='.')
                {co++;}
        }
         if(co==c && repeat==true)
            {res1=co-1+res1; repeat=true; re++;}
        else if(co==c)
            {res1=co+res1; repeat=true; re++;}
    }
    int res=0; //2ndpart
    for(int i=0 ; i<c ; i++)
    {
        co=0;
        bool repeat=false; //repeat or not
        for(int j=0 ; j<r ; j++)
        {
            if(arr[j][i]=='.')
                co++;
        }
        if(co==r)
            {res=co-re+res; repeat=true;}
    }
    cout<<res+res1;
    return 0;
}