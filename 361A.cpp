#include <iostream>
 using namespace std;
 int main(){
 int n , k;
 cin >> n >> k;
 int x = 0;
 int y = n - 1;
 for(int i = 0 ; i < n ; i++){
  for(int j = 0 ; j < n ; j++){
   if(i == x && j == y){
    x += 1;
    y -= 1;
    cout << k << " ";
   }else cout << "0" << " ";
  }
  cout << endl;
 }
}