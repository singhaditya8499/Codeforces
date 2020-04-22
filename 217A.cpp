#include<bits/stdc++.h>
using namespace std ;
 int x[105] , y[105] ;
 int v[105] = {0} , n ;
  void dfs(int a , int b )
{
 for(int i=1;i<=n;i++) 
 {
  if(v[i]) continue ;
  if(x[i]!=a&&y[i]!=b) continue ;
  v[i] = 1 ;
  dfs(x[i],y[i]);
 }
}
 int main()
{
 int i , j  ;
 cin >> n ;
 int val = -1 ;
  for(i=1;i<=n;i++)
 {
  cin >> x[i] >> y[i] ;
 }
   for(i=1;i<=n;i++)
 {
  if(v[i]) continue ;
  v[i] = 1 ;
  dfs(x[i],y[i]);
  val ++ ;
     }
   cout << val  << endl ;
 }