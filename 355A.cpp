#include <iostream>
 using namespace std;
 int main(){
 int k , d;
 cin >> k >> d;
 if(d == 0 && k > 1){
  cout << "No solution" << endl;
 }else
 for(int i = 0 ; i < k;i++){
  if(i == 0){
   cout << d;
  }else cout << 0;
 }
}