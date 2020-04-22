#include<iostream>
int main()
{
    int n,a,b,c;
    std::cin>>n>>a>>b>>c;
    std::cout<<std::max(std::min(std::min(a,b)*(n-1),std::min(a,b)+c*(n-2)),0);
    exit(0);
    }