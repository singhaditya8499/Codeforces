#include <iostream>
std::string s;
int main() {
std::cin>>s;
int v=97,i=0;
while(s[i]&&v<=122){if(s[i]<=v)s[i]=v++;i++;}
std::cout<<((v-123)?"-1":s);
}