#include <iostream>
#include <cstdio> 
#include <map>
using namespace std;
 int main() {
 int n, a;
 map <int, int> p;
 scanf("%d", &n);
 for(int i=1; i<=n; i++) scanf("%d", &a), p[a]=i;
 for(int i=1; i<=n; i++) printf("%d ", p[i]);
 return 0;
}