#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main() {
 vector<int> a, b, c;
 int n;
 cin >> n;
 for (int j, i = 0; i < n; ++i) {
  cin >> j;
  a.push_back(j);
 }
 for (int j, i = 0; i < n - 1; ++i) {
  cin >> j;
  b.push_back(j);
 }
 for (int j, i = 0; i < n - 2; ++i) {
  cin >> j;
  c.push_back(j);
 }
 sort(a.begin(), a.end());
 sort(b.begin(), b.end());
 sort(c.begin(), c.end());
 int j = 0;
 while (j < b.size()) {
  if (a[j] != b[j]) {
   cout << a[j] << endl;
   j = 0;
   break;
  }
  else ++j;
 }
 if (j == b.size()) {
  cout << a[j] << endl;
  j = 0;
 }
 while (j < c.size()) {
  if (c[j] != b[j]) {
   cout << b[j] << endl;
   j = 0;
   break;
  }
  else ++j;
 }
 if (j == c.size()) {
  cout << b[j] << endl;
  j = 0;
 }
 return 0;
}