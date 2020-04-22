#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
int main()
{long long int x,n,ans=0,m=0,k;
cin >> n;
x = n;
while (x)
{
x /= 10;
m++;
}
ans = n*m + m - 1;
k = 1;
for (int i = 0; i < m-1; i++)
{
k *= 10;
ans -=k;
}
cout << ans << endl;
return 0;
}