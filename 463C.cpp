#include<bits/stdc++.h>
using namespace std;
long long g[2010][2010],a[4000],b[4000],n,mxx=-1,mxy=-1;
int x[2],y[2];
int main(){
 cin >> n;
 for(int i = 0 ; i < n ; i++){
  for(int j = 0 ; j < n ; j++){
   scanf("%d",&g[i][j]);
   a[i+j] += g[i][j];
   b[i-j+n] += g[i][j];
  }
 }
 for(int i = 0 ; i < n ; i++){
  for(int j = 0 ; j < n ; j++){
   long long tmp = a[i+j]+b[i-j+n]-g[i][j];
   if(!((i+j)%2)&&tmp>mxx) mxx=tmp,x[0]=i+1,y[0]=j+1;
   else if((i+j)%2&&tmp>mxy) mxy=tmp,x[1]=i+1,y[1]=j+1;
  }
 }
 cout << mxx+mxy << endl;
 cout << x[0] << " " << y[0] << " " << x[1] << " " << y[1] << endl;
}