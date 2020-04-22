/*input
3 4
aba
*/
#include <bits/stdc++.h>
 using namespace std;
char s[1005];
void Input(){
 int n, p, i;
 cin >> n >> p;
 for(i = 1; i <= n; i++) cin >> s[i];
 s[n]++;
 for(i = n; i >= 1 && i <= n;){
  if(s[i] - 'a' == p){
   s[i] = 'a'; i--;
   s[i]++; continue;
  }
  if((i > 1 && s[i] == s[i - 1]) || (i > 2 && s[i] == s[i - 2])) s[i]++;
  else i++;
 }
  if(i == 0) cout << "NO";
 else
  for(int i = 1; i <= n; i++) cout << s[i];
 return;
}
  signed main(void){
 ios_base::sync_with_stdio(0); cin.tie(0);
 Input(); 
  return 0;
}