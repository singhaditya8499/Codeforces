#include<bits/stdc++.h>
using namespace std;
const int N = 3*100009;
int n;
long long a[N],b[N];
main(){
 cin >> n;
 long long z=0;
 for (int i= 0;i< n;i++){
  string s;
  cin>>s;
  int l=0,r=0;
  for (int j =0;j<s.length();j++){
   if (s[j] == '('){
    l++;
   }
   else{
    if (l>0) l--; else r++;
   }
  }
  if ((l>0)&&(r>0)) continue;
  if (l==0 && r==0) z++;
  if (l>0){
   a[l]++;
  }
  else b[r]++;
 }
 long long ans=z*z;
 for (int i=1;i<=N; i++){
  ans += a[i]*b[i];
 }
 cout<<ans;
}