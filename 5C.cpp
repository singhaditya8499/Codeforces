#include<cstdio>  
#include<iostream>  
#include<stack>  
  using namespace std;  
  #define MAXN 1000000  
  int len[MAXN]={0};  
  int main(){  
#ifndef ONLINE_JUDGE  
  freopen("data","r",stdin);  
#endif  
    string s;  
  stack<int> st;  
  int k,maxl=0,n=0;  
  cin>>s;  
    for(int i=0; i<s.size(); i++){  
    if('(' == s[i]){  
      st.push(i);  
    }else{  
      if(!st.empty()){  
        k = st.top();  
        st.pop();  
          len[i] = ( k>0 ? len[k-1] : 0 ) + i+1-k;  
        if(len[i]>maxl){  
          maxl = len[i];  
          n = 1;  
        }else if(len[i]==maxl)  
          n++;  
      }  
    }  
  }  
    if(maxl>0)  
    cout<< maxl << " " << n << endl;  
  else  
    cout<<"0 1"<<endl;  
  #ifndef ONLINE_JUDGE  
  fclose(stdin);  
#endif  
    return 0;  
} 