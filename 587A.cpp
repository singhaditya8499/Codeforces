#define N (1<<20)
#include <bits/stdc++.h>
 using namespace std;
 int n,x,res,p[N];
 int main()
{
    for(cin>>n;n--;)
        scanf("%d",&x),p[x]++;
    for(int i=0;i<N;i++)
        res+=p[i]&1,p[i+1]+=p[i]/2;
    cout<<res<<endl;
}