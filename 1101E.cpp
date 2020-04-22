#include <bits/stdc++.h>
 #define forn(i, n) for (int i = 0; i < int(n); i++)
 using namespace std;
 int main() {
 int n;
 scanf("%d", &n);
 int mxa = 0, mxb = 0;
 static char buf[5];
 forn(i, n){
  int x, y;
  scanf("%s%d%d", buf, &x, &y);
  if (x < y)
   swap(x, y);
  if (buf[0] == '+'){
   mxa = max(mxa, x);
   mxb = max(mxb, y);
  }
  else{
   puts(mxa <= x && mxb <= y ? "YES" : "NO");
  }
 }
}