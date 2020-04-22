#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--){
    long long n;
    cin >> n;
    long long ans=0.5*n*(n+1), nt=log2(n);
    ans-=2*(pow(2, nt+1)-1);
    cout << ans << endl;
}
 }