#include <iostream>
#include<set>
using namespace std;
 int main() {
 // your code goes here
 long int k,l,n,m,d;
 cin>>k>>l>>m>>n>>d;
 set<int> a;
 for(int i=k;i<=d;i=i+k)
 a.insert(i);
 for(int i=l;i<=d;i=i+l)
 a.insert(i);
 for(int i=m;i<=d;i=i+m)
 a.insert(i);
 for(int i=n;i<=d;i=i+n)
 a.insert(i);
 cout<<a.size();
 return 0;
}