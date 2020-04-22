#include<bits/stdc++.h>
#define forup(a,i,j,step) for(int i=a;i<=j;i=i+step)
#define fordown(a,i,j,step) for(int i=a;i>=j;i=i-step)
using namespace std;
long long n,k;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie();
cin>>n>>k;
long long br=1;
while(k%2==0)k=k/2,br++;
cout<<br<<endl;
return 0;
}