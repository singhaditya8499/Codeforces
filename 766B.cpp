#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main() {
 // your code goes here
 int n;
 cin>>n;
 long int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
 sort(a,a+n);
 int count = 0;
    for (int i = 0; i < n-2; ++i)
    {
        int k = i+2;
         // Fix the second element
        for (int j = i+1; j < n; ++j)
        {
            while (k < n && a[i] + a[j] > a[k])
               ++k;
            count += k - j - 1;
        }
        if(count>0)
        break;
    }
  if(count)
  cout<<"YES\n";
  else
  cout<<"NO\n";
 return 0;
}