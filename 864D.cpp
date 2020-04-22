#include <cstdio>
using namespace std;
const int N = 2e5 + 5;
int n, a[N];
int num[N];
int c[N];
bool flag[N];
int main() {
 scanf("%d", &n);
 for(int i = 1; i <= n; i++) {
  scanf("%d", a + i);
  num[a[i]]++;
 }
 int m = 0;
 for(int i = 1; i <= n; i++) {
  if(!num[i]) c[++m] = i;
 }
 printf("%d\n", m);
 m = 1;
 for(int i = 1; i <= n; i++) {
  if(flag[a[i]] || (--num[a[i]] && c[m] < a[i])) printf("%d ", c[m++]);
  else printf("%d ", a[i]), flag[a[i]] = 1;
 }
 return 0;
}