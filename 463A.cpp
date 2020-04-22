#include <iostream>
#include <cstdio>
using namespace std;
 int main(){
    #ifndef ONLINE_JUDGE
        freopen("date.in","r",stdin);
        freopen("date.out","w",stdout);
    #endif
    int n, s;
    cin.sync_with_stdio(false);
    cin >> n >> s;
    int sol = 100;
    bool ok = 0;
    for(int i = 1;i <= n; ++i){
        int x, y;
        cin >> x >> y;
        if(x < s){
            if(y)
                sol = min(sol,y);
        }
        if(x < s || (x==s && y==0))
            ok = 1;
    }
    if(!ok)
        cout<<"-1\n";
    else
        cout<<100-sol<<"\n";
    return 0;
}