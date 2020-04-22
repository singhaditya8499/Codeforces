#include <cstdio>
void print(int s){
 switch (s){
 case 0: puts("O-|-OOOO"); break;
 case 1: puts("O-|O-OOO"); break;
 case 2: puts("O-|OO-OO"); break;
 case 3: puts("O-|OOO-O"); break;
 case 4: puts("O-|OOOO-"); break; 
 case 5: puts("-O|-OOOO"); break;
 case 6: puts("-O|O-OOO"); break;
 case 7: puts("-O|OO-OO"); break;
 case 8: puts("-O|OOO-O"); break;
 case 9: puts("-O|OOOO-"); break;
 }
}
int main(){
 long long int n;
 while (scanf("%lld", &n) == 1){
  if (n == 0)
   print(n);
  while (n>0){
   print(n % 10);
   n /= 10;
  }
 }
 return 0;
}