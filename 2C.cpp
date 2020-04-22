#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
#define pi 3.1415926535
#define mod 1000000007                       //change when needed
 using namespace std;
double x[3],y[3],r[3],err[3];
double check(double a,double b)
{
    for(int i=0;i<3;i++)
    {
        err[i]=sqrt(pow(a-x[i],2)+pow(b-y[i],2))/r[i];
    }
    double total_err=0.0;
    for(int i=0;i<3;i++)
    {
        total_err+=pow(err[i]-err[(i+1)%3],2);
    }
    return total_err;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double xx=0.0,yy=0.0;
    for(int i=0;i<3;i++)
    {
        cin>>x[i]>>y[i]>>r[i];
        xx+=x[i];
        yy+=y[i];
    }
    xx=xx/3.0;
    yy=yy/3.0;
    for(double i=1;i>=0.000001;)
    {
        if(check(xx,yy)>check(xx+i,yy))
        {
            xx=xx+i;
        }
        else if(check(xx,yy)>check(xx-i,yy))
        {
            xx=xx-i;
        }
        else if(check(xx,yy)>check(xx,yy+i))
        {
            yy=yy+i;
        }
        else if(check(xx,yy)>check(xx,yy-i))
        {
            yy=yy-i;
        }
        else 
        {
            i=i*0.7;
        }
    }
    if(check(xx,yy)<0.000005)
    printf("%0.9f %0.9f\n",xx,yy);
    return 0;
}