#include <iostream>
long long n,m,i=1,a;
main() {
 std::cin>>n>>m;
 for(;i<=n;i++)a+=(m+i%5)/5;
 std::cout<<a;
}