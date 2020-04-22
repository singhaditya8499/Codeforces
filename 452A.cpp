#include<iostream>
#include <string.h>
#include <string>
int path[10];
using namespace std;
int main()
{
 int n;
 cin >> n;
 char v[] = "vaporeon";
 char j[] = "jolteon";
 char f[] = "flareon";
 char e[] = "espeon";
 char u[] = "umbreon";
 char l[] = "leafeon";
 char g[] = "glaceon";
 char s[] = "sylveon";
 string a;
 cin >> a;
 int count = 0,r=0,b=0,c=0,d=0,x=0,y=0,z=0,w=0;
 for (int i = 0; i < n; i++)
 {
  path[i] = -1;
  if (a[i] != '.')
  {
   path[i] = 1;
   count++;
  }
 }
 for (int i = 0; i < n; i++)
 {
  if (path[i] == 1)
  {
   if (v[i] == a[i])
   {
    r++;
   }
   if (j[i] == a[i])
   {
    b++;
   }
   if (f[i] == a[i])
   {
    c ++ ;
   }
   if (e[i] == a[i])
   {
    d++;
   }
   if (u[i] == a[i])
   {
    x++;
   }
   if (l[i] == a[i])
   {
    y++;
   }
   if (g[i] == a[i])
   {
    z++;
   }
   if (s[i] == a[i])
   {
    w++;
   }
  }
 }
 if (r == count && strlen(v)==n)
 {
  cout << v << endl;
 }
 if (b == count && strlen(j) == n)
 {
  cout << j << endl;
 }
 if (c == count && strlen(f) == n)
 {
  cout << f << endl;
 }
 if (d == count && strlen(e) == n)
 {
  cout << e << endl;
 }
 if (x == count && strlen(u) == n)
 {
  cout << u << endl;
 }
 if (y == count && strlen(l) == n)
 {
  cout << l << endl;
 }
 if (z == count && strlen(g) == n)
 {
  cout << g << endl;
 }
 if (w == count && strlen(s) == n)
 {
  cout << s << endl;
 }
 return 0;
}