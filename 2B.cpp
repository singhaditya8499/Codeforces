#include<bits/stdc++.h>
using namespace std;
 class pairr{
public:
    long long int twos, fives;
    char direction_two, direction_five;
};
 int main(){
    ios_base::sync_with_stdio(false);
    long long int n;
    cin >> n;
    long long int i,j;
     vector< vector<long long int> > a(n, vector<long long int>(n));
    vector<vector<pairr> > dp(n, vector<pairr>(n));
    long long int flag=0, posx=-1, posy=-1;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]==0){
                flag=1;
                posx=i;
                posy=j;
            }
            long long int temp = a[i][j];
            while(temp>0 && temp%2==0){
                temp/=2;
                dp[i][j].twos++;
            }
            temp = a[i][j];
            while(temp > 0 && temp%5==0){
                dp[i][j].fives++;
                temp/=5;
            }
        }
    }
    for(i=1; i<n; i++){
        dp[i][0].twos += dp[i-1][0].twos;
        dp[i][0].fives += dp[i-1][0].fives;
        dp[i][0].direction_five = 'D';
        dp[i][0].direction_two = 'D';
     }
    for(i=1; i<n; i++){
        dp[0][i].twos += dp[0][i-1].twos;
        dp[0][i].fives += dp[0][i-1].fives;
        dp[0][i].direction_five = 'R';
        dp[0][i].direction_two = 'R';
    }
    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
             if(dp[i-1][j].twos > dp[i][j-1].twos){
                dp[i][j].twos += dp[i][j-1].twos;
                dp[i][j].direction_two = 'R';
            }
            else{
                dp[i][j].twos += dp[i-1][j].twos;
                dp[i][j].direction_two = 'D';
            }
             if(dp[i-1][j].fives > dp[i][j-1].fives){
                dp[i][j].fives += dp[i][j-1].fives;
                dp[i][j].direction_five = 'R';
            }
            else{
                dp[i][j].fives+= dp[i-1][j].fives;
                dp[i][j].direction_five = 'D';
            }
        }
    }
    //cout << dp[n-1][n-1].twos << endl;
    //cout << dp[n-1][n-1].fives << endl;
    if(flag==1 && dp[n-1][n-1].twos>0 && dp[n-1][n-1].fives>0){
        cout << "1" << endl;
        i=0; j=0;
        while(i<posx){
            cout << 'D';
            i++;
        }
        while(j<posy){
            cout << 'R';
            j++;
        }
        posx = n-1;
        posy = n-1;
        while(i<posx){
            cout << 'D';
            i++;
        }
        while(j<posy){
            cout << 'R';
            j++;
        }
    }
    else {
        stack<char> s;
        if (dp[n - 1][n - 1].twos <= dp[n - 1][n - 1].fives) {
            cout << dp[n - 1][n - 1].twos << endl;
            i = n - 1, j = n - 1;
            while (i >= 0 && j >= 0) {
                s.push(dp[i][j].direction_two);
                if (dp[i][j].direction_two == 'D') {
                    i--;
                } else {
                    j--;
                }
            }
        } else {
            i = n - 1, j = n - 1;
            cout << dp[n - 1][n - 1].fives << endl;
            while (i >= 0 && j >= 0) {
                s.push(dp[i][j].direction_five);
                if (dp[i][j].direction_five == 'D') {
                    i--;
                } else {
                    j--;
                }
            }
        }
        s.pop();
        while (!s.empty()) {
            cout << s.top();
            s.pop();
        }
    }
}