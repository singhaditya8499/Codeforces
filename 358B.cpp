#include <bits/stdc++.h>
using namespace std;
 int main(){
   int n,i,c=0;
   string massage="",heart="<3",s;
   cin>>n;
   for(i=0;i<n;++i){
     cin>>s;
     massage+=heart;
     massage+=s;
   }
   massage+=heart;
   s="";
   cin>>s;
  // cout<<massage<<endl;
   for(i=0;i<s.size();++i){
    if(c<massage.size())
    //cout<<s[i]<<" "<<massage[c]<<endl;
    if( s[i]== massage[c])
        ++c;
   }
   if(c==massage.size())
    cout<<"yes";
   else
    cout<<"no";
    return 0;
}