#include"bits/stdc++.h"
using namespace std;
main()
{
 double a,aa,b,bb,c,cc;
 cin>>a>>aa>>b>>bb>>c>>cc;
 if((a-b)*(a-b)+(aa-bb)*(aa-bb)==(b-c)*(b-c)+(bb-cc)*(bb-cc)&&(a+c!=2*b||aa+cc!=2*bb)){
  printf("Yes\n");
 }
 else{
  printf("No");
 }
 return 0;
}