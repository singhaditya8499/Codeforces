#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
using namespace std;
int a[105]={0} , b[105]={0} ;
 int main()
{  
    ios_base::sync_with_stdio(false);
  int i , j , t  ;
int n , m ;
   cin >> n >> m ;
   int val , idx ;
    idx = 1 ;
  int cur ;
  val = -1 ;
    for(int i=1;i<=m;i++)
  {     cur = -1 ;
     for(int j=1;j<=n;j++)
      {
            cin >> val ;
            if( val > cur )
            {
             cur = val ;
             idx = j ;
      }
   }
      a[i] = idx ;
  }
 for(i=1;i<=100;i++) b[a[i]]++;
 val = -1 ;
 for(i=1;i<=100;i++)
{
 if(val<b[i])
 {
  val = b[i] ;
  idx = i ;
 }
}
    cout << idx << endl ;
  return 0 ;
}