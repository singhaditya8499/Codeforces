#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <stack>
#include <queue>
#include <set>
 using namespace std;
 #define fi first
#define se second
typedef pair<int,int> ii;
 vector<ii> vecc, vecd, vecco, vecdo;
 int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 //freopen("input.in", "r", stdin);
 int n, C, D;
 cin >> n >> C >> D;
 for(int i = 0; i < n; i++)
 {
  int x, y; char c;
  cin >> x >> y >> c;
  if(c == 'C') vecc.push_back({y,x});
  else vecd.push_back({y,x});
 }
 sort(vecc.begin(), vecc.end());
 sort(vecd.begin(), vecd.end());
 vecco = vecc;
 vecdo = vecd;
 int tmx = 0;
 //printf("COIN : \n");
 for(int i = 0; i < vecc.size(); i++)
 {
  tmx = max(vecc[i].se,tmx);
  vecc[i].se = max(vecc[i].se,tmx);
  // printf("%d %d\n", vecc[i].fi, vecc[i].se);
 }
 tmx = 0;
 // printf("DIAMOND : \n");
 for(int i = 0; i < vecd.size(); i++)
 {
  tmx = max(vecd[i].se,tmx);
  vecd[i].se = max(vecd[i].se,tmx);
  // printf("%d %d\n", vecd[i].fi, vecd[i].se);
 }
 int mx1 = 0;
 int ta = -1, tb = -1;
 for(ii i : vecc)
 {
  if(i.fi <= C) ta = i.se;
  else break;
 }
 for(ii i : vecd)
 {
  if(i.fi <= D) tb = i.se;
  else break;
 }
 if(ta != -1 && tb != -1)
  mx1 = ta+tb;
 int mxcd = 0;
 for(int i = 1; i < vecc.size(); i++)
 {
  if(vecc[i].fi + vecc[0].fi > C)
   break;
  else
  {
   int kir = 0, kan = i-1;
   while(kir < kan)
   {
    int mid = (kir+kan+1)/2;
    if(vecc[mid].fi+vecc[i].fi > C) kan = mid-1;
    else kir = mid;
   }
   mxcd = max(vecc[kir].se+vecco[i].se, mxcd);
  }
 }
 // mxd
 for(int i = 1; i < vecd.size(); i++)
 {
  if(vecd[i].fi + vecd[0].fi > D)
   break;
  else
  {
   int kir = 0, kan = i-1;
   while(kir < kan)
   {
    int mid = (kir+kan+1)/2;
    if(vecd[mid].fi+vecd[i].fi > D) kan = mid-1;
    else kir = mid;
   }
   mxcd = max(vecd[kir].se+vecdo[i].se, mxcd);
  }
  //printf("i : %d\n", mxcd, vecdo[kan]);
 }
 cout << max(mxcd, mx1) << "\n";
}