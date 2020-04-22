#include <iostream>
int a,b,c,d;
int main() {
 std::cin>>a>>b>>c>>d;
 while(b!=d && b<1e5)
  b<d ? b+=a : d+=c;
 std::cout<<(b==d ? b:-1);
 return 0;
}