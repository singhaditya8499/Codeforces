#include <bits/stdc++.h>
using namespace std;
const int N = 500001;
 string a[N];
 int main()
{
 int n;
 cin >> n;
 for(int i=0; i<n; i++)
  cin >> a[i];
 for(int i=n-1; i; i--)
 {
  int sz = min(a[i].length(), a[i-1].length()), j;
  bool c = true, ic = false;
  for(j=0; j<sz; j++)
  {
   if(a[i][j] > a[i-1][j])
   {
    ic = true;
    break;
   }
   if(a[i][j] < a[i-1][j])
    break;
   if(a[i][j] != a[i-1][j])
    c = false;
  }
  if(!ic and (j != sz or c))
   a[i-1].resize(j);
 }
 for(int i=0; i<n; i++)
  cout << a[i] << endl;
}