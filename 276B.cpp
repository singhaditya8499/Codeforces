#include<bits/stdc++.h>
#include<unordered_set>
#define mod 1000000007
typedef long long ll;
using namespace std;
bool cmp(ll a,ll b)
{
    return a>b;
}
int main()
{
    string s;
    cin>>s;
    int cnt[26];
    memset(cnt,0,sizeof cnt);
    for(int i=0;i<s.length();i++)
        cnt[s[i]-'a']++;
    int turn=0;
    while(turn!=-1)
    {
        int odd=0;
        for(int i=0;i<26;i++)
        {
            if(cnt[i]%2)
                odd++;
        }
        if(odd<=1)
            break;
        int found=0;
        for(int i=0;i<26;i++)
        {
            if(cnt[i]%2==0&&cnt[i]>0)
            {
                cnt[i]--;
                found=1;
                break;
            }
        }
        if(!found)
        {
            for(int i=0;i<26;i++)
            {
                if(cnt[i]>0)
                {
                    cnt[i]--;
                    break;
                }
            }
        }
        turn=1-turn;
    }
    if(turn)
        cout<<"Second\n";
    else
        cout<<"First\n";
}