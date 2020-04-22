#include<bits/stdc++.h>
using namespace std;
int main()
{
 double n,l,v1,v2,k;
 cin>>n>>l>>v1>>v2>>k;
 long long a=n/k;
 if(a*k<n)
  a++;
 double x=l*(a/(v2-v1)+(a-1)/(v2+v1))/(v2*(a/(v2-v1)-(a-1)/(v2+v1)));
 printf("%.10f",x);
}