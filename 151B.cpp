#include "bits/stdc++.h"
using namespace std;
 int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
  int n,taxi=-1,pizza=-1,girl=-1;
 string tres,pres,gres;
 cin>>n;
 for(int i=0;i<n;i++){
  int pn,aa=0,bb=0,cc=0; string name;
  cin>>pn>>name;
  for(int j=0;j<pn;j++){
   int a,b,c;
   char ch;
   cin>>a>>ch>>b>>ch>>c;
   if(a==b&&b==c&&a%11==0) aa++;
   else if(a/10>a%10 && a%10>b/10 && b/10>b%10 && b%10>c/10 && c/10>c%10) bb++;
   else cc++;
  }
  if(aa>taxi){
   tres=" "+name;
   taxi=aa;
  }
  else if(aa==taxi) {tres+=", "+name;}
  if(bb>pizza){
   pres=" "+name;
   pizza=bb;
  }
  else if(bb==pizza) {pres+=", "+name;}
  if(cc>girl){
   gres=" "+name;
   girl=cc;
  }
  else if(cc==girl) {gres+=", "+name;}
 }
  cout<<"If you want to call a taxi, you should call:"<<tres<<"."<<endl;
 cout<<"If you want to order a pizza, you should call:"<<pres<<"."<<endl;
 cout<<"If you want to go to a cafe with a wonderful girl, you should call:"<<gres<<"."<<endl;
  return 0;
}