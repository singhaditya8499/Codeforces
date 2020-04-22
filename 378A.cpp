#include <iostream>
#include <cmath>
 using namespace std;
 int main() {
 int a, b;
 cin >> a >> b;
 int win = 0;
 int draw = 0;
 int lose = 0;
 for(int i = 1 ; i <= 6 ; i++){
  if(abs(a - i) < abs(b - i)){
   win++;
  }else if(abs(a - i) > abs(b - i)){
   lose++;
  }else{
   draw++;
  }
 }
 cout << win << " "  << draw << " " << lose << endl;
 return 0;
}