#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
 string S;
 while (cin >> S){
  long long int R = 0;
  int i, j, len, pos;;
  for (pos = 0; S[pos] != '^'; pos++);
  for (i = pos - 1, j = pos + 1, len = 1; i >= 0 && j < S.length(); i--, j++){
   if (S[i] != '=')
    R += len*(S[i] - '0');
   if (S[j] != '=')
    R -= len*(S[j] - '0');
   len++;
  }
  while (i >= 0){
   if (S[i] != '=')
    R += len*(S[i] - '0');
   i--, len++;
  }
  while (j < S.length()){
   if (S[j] != '=')
    R -= len*(S[j] - '0');
   j++, len++;
  }
  if (R == 0)
   puts("balance");
  else if (R > 0)
   puts("left");
  else
   puts("right");
  }
 return 0;
}