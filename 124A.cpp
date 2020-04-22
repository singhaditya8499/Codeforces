#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int main()
{
 int n,a,b;
 cin>>n>>a>>b;
 cout<<min(n-a,b+1);
}