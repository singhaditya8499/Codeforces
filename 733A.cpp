#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
bool vwl(char c)
{
    if(c=='A')return 1;
    if(c=='E')return 1;
    if(c=='I')return 1;
    if(c=='O')return 1;
    if(c=='U')return 1;
    if(c=='Y')return 1;
    return 0;
}
 int main()
{
    string ss;
    cin>>ss;
    ss = '#'+ss+'#';
     int pre = 0,ans = -1e9;
     for(int i=1;i<ss.size();++i)
    {
//        deb(i,ss[i]);
        if(i==ss.size()-1)
        {
            ans = max(ans,i-pre);
        }
        else
        {
//            deb("ibnside");
            if(vwl(ss[i]))
            {
//                deb("more in");
                //deb(pre,i);
                ans = max(ans,i-pre);
                pre = i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}