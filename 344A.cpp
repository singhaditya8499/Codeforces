#include<bits/stdc++.h>
using namespace std;
int main() 
{
 int n, ans = 1;
 string prev, s;
 cin >> n >> prev;
 for(int i=1;i<n;i++) 
 {
  cin >> s;
  if (s != prev) {
   ans++;
   prev = s;
  }
 }
 printf("%d\n", ans);
}