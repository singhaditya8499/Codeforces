#include <iostream>
#include <stdio.h>
using namespace::std;
 main()
{
 ios_base::sync_with_stdio(false);     // Fast I/O
 char x[100];
 gets(x);
 int i=0;
 int f=1;
 while (x[i])
 {
  if (islower(x[i]))
  {
   f=0;
  }
  i++;
 }
 i=1;
 if (islower(x[0]))
 {
  f=1;
  while (x[i])
  {
   if (islower(x[i]))
   {
    f=0;
   }
   i++;
  }
 }
 if (f==1)
 {
  i=0;
  while (x[i])
  {
   if(islower(x[i]))
    x[i]=toupper(x[i]);
   else
    x[i]=tolower(x[i]);
   i++;
  }
 }
 cout << x;
}