#include <bits/stdc++.h>
 using namespace std;
 int main(){
  //cin.ignore();
 string s, t;
 getline(cin, s);
 vector<int> v;
  for(int i=0; i<s.length(); ++i){
  if(s[i]==','){
   int x = stoi(t);
   v.push_back(x);
   t = "";
  }
  else{
   t += s[i];
  } 
 }
  int x = stoi(t);
 v.push_back(x);
  sort(v.begin(), v.end());
  int t_min = v[0], t_max=v[0];
  for(int i=1; i<v.size(); ++i){
  if(v[i] == v[i-1] || v[i]==v[i-1]+1){
   t_max = v[i];
  }
  else{
   if(t_min == t_max){
    cout << t_min <<",";
   }
   else{
    cout << t_min << "-" << t_max << ",";
   }
   t_min = v[i];
   t_max = v[i];
  }
 }
  if(t_min == t_max){
  cout << t_min;
 }
 else{
  cout << t_min << "-" << t_max;
 }
      return 0;
}