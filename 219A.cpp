#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <set>
#include <math.h>
#include <stdio.h>
using namespace std;
 #define fo(i,n) for (int i=0; i<(int)n; i++)
         int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
        int m = s.length();
    if (m%n!=0) {cout<<"-1"; return 0;}
        int c[26];
    for (int i=0; i<26; i++) c[i]=0;
    for (int i=0; i<m; i++) c[s[i]-'a']++;
     for (int i=0; i<26; i++) if (c[i]%n!=0) {cout<<"-1"; return 0;}
        string str;
    for (int i=0; i<26; i++) {
         if (c[i]!=0) {
            for (int j=0; j<c[i]; j+=n) str+=(i + 'a');
        }
    }
        string sol;
    for (int i=0; i<n; i++) sol+=str;
        cout<<sol;
        return 0;
                }