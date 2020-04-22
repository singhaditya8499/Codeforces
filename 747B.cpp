#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <map>
 // 747B
 typedef long long int ll;
 int main() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n%4!=0)
    {
        cout << "===" << endl;
    }
    else
    {
        ll freq[128]={0};
        bool flag=true;
        for (ll i=0; i<n; i++)
        {
            if (isalpha(s[i]))
            {
                freq[s[i]]++;
                if (freq[s[i]]>n/4)
                    flag=false;
            }
        }
        if (!flag)
        {
            cout << "===" << endl;
        }
        else
        {
            for (ll i=0; i<n; i++)
            {
                if (isalpha(s[i]))
                    cout << s[i];
                else
                {
                    if (freq['A']<n/4)
                    {
                        cout << 'A';
                        freq['A']++;
                    }
                    else if (freq['T']<n/4)
                    {
                        cout << 'T';
                        freq['T']++;
                    }
                    else if (freq['C']<n/4)
                    {
                        cout << 'C';
                        freq['C']++;
                    }
                    else if (freq['G']<n/4)
                    {
                        cout << 'G';
                        freq['G']++;
                    }
                }
            }
            cout << endl;
        }
    }
}