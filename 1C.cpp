#include "bits/stdc++.h"
using namespace std;
#define PI 3.14159265359
#define flash (ios_base::sync_with_stdio(false))
double side(double x,double y,double a,double b)
{
 return pow(x-a,2)+pow(y-b,2);
}
double eps = 1e-4 ;
double gcd(double x, double y) {
    while (fabs(x) > eps && fabs(y) > eps) {
        if (x > y)
                x -= floor(x / y) * y;
        else
                y -= floor(y / x) * x;
    }
    return x + y;
}
 int main()
{
 flash;
 double cc[3][2],a,b,c;
 for(int i=0;i<3;i++)
 {
  cin>>cc[i][0]>>cc[i][1];
 }
 a=side(cc[0][0],cc[0][1],cc[1][0],cc[1][1]);
 b=side(cc[0][0],cc[0][1],cc[2][0],cc[2][1]);
 c=side(cc[2][0],cc[2][1],cc[1][0],cc[1][1]);
 double area=0,avg;
 avg=(sqrt(a)+sqrt(b)+sqrt(c))/2;
 area=sqrt(avg*(avg-sqrt(a))*(avg-sqrt(b))*(avg-sqrt(c)));
 double r=(sqrt(a)*sqrt(b)*sqrt(c))/(4*area);
 double aa,ab,ac;
 aa=acos((b+c-a)/(2*sqrt(b)*sqrt(c)));
 ab=acos((c+a-b)/(2*sqrt(c)*sqrt(a)));
 ac=acos((a+b-c)/(2*sqrt(a)*sqrt(b)));
 double n=PI/(gcd(aa,gcd(ab,ac)));
 double ans=(n*pow(r,2)*sin((2*PI)/n))/2;
 printf("%0.6f",ans);
}