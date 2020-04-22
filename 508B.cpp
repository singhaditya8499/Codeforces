#include <iostream>
std::string s;
int i,k,n,p,m=9;
int main() {
 std::cin>>s;k=s.size()-1;
 for(;i<=k;i++)if((s[i]-48)%2==0){p=i;m=s[i]-48;if(m<s[k]-48)break;}
 s[p]=s[k];s[k]=m+48;
 std::cout<<(m==9?"-1":s);
}