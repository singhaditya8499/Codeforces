#include <bits/stdc++.h>
 using namespace std;
 #define ll long long
#define ping(arg) cout << arg << endl
 bool comp(pair<ll, ll> &p1, pair<ll, ll> &p2) {
  return p1.first < p2.first;
}
 int main() {
  int ans = 0;
  std::string input, output, str = "";
  cin >> input >> output;
  int y1 = input[1] - '0' , y2 = output[1] - '0';
  int x1 = input[0], x2 = output[0];
  if(x1 <= x2) {
    for(int i = 0;i < min(x2 - x1, abs(y2 - y1));i++) {
      if(y2 > y1)
        ans++, str += "RU\n";
      else
        ans++, str += "RD\n";
    }
    if(x2 - x1 < abs(y2 - y1)) {
      for(int i = 0;i < abs(abs(y2 - y1) - x2 + x1);i++) {
        if(y2 > y1)
          ans++, str += "U\n";
        else
          ans++, str += "D\n";
      }
    }
    else {
      for(int i = 0;i < abs(abs(y2 - y1) - x2 + x1);i++) {
        if(x2 > x1)
          ans++, str += "R\n";
        else
          ans++, str += "L\n";
      }
    }
  }
  else {
    for(int i = 0;i < min(x1 - x2, abs(y2 - y1));i++) {
      if(y2 > y1)
        ans++, str += "LU\n";
      else
        ans++, str += "LD\n";
    }
    if(x1 - x2 < abs(y2 - y1)) {
      for(int i = 0;i < abs(abs(y2 - y1) - x1 + x2);i++) {
        if(y2 > y1)
          ans++, str += "U\n";
        else
          ans++, str += "D\n";
      }
    }
    else {
      for(int i = 0;i < abs(abs(y2 - y1) - x1 + x2);i++) {
        if(x2 > x1)
          ans++, str += "R\n";
        else
          ans++, str += "L\n";
      }
    }
  }
  cout << ans << endl << str;
  return 0;
}