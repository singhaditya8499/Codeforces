#include <bits/stdc++.h>
 #define F first
#define S second
 using namespace std;
 map < char , char > mp;
vector < pair < char , char > > ans;
 int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s1 , s2;
    cin >> s1 >> s2;
    for (int i = 0 ; i < 26 ; i++)
    {
        mp['a' + i] = '!';
    }
    for (int i = 0 ; i < s1.size() ; i++)
    {
            if (mp[s1[i]] == '!' && mp[s2[i]] == '!')
            {
                if (s2[i] != s1[i])
                ans.push_back({s1[i] , s2[i]});
                mp[s1[i]] = s2[i];
                mp[s2[i]] = s1[i];
            }
            if (mp[s1[i]] != '!' && mp[s1[i]] != s2[i])
            {
                cout << -1;
                return 0;
            }
            if (mp[s2[i]] != '!' && mp[s2[i]] != s1[i])
            {
                cout << -1;
                return 0;
            }
    }
    cout << ans.size() << endl;
    for (int i = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i].F << " " << ans[i].S << endl;
    }
    return 0;
}