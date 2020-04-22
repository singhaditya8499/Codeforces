#include <iostream>
 using namespace std;
int a[26],b[26],c[26];
int main()
{
    string s,s1,s2;int m1=INT_MAX,m2=INT_MAX;int m=0,n=0;
    cin>>s>>s1>>s2;
    for(int i=0;i<s.length();i++)a[s[i]-'a']++; for(int i=0;i<s1.length();i++)b[s1[i]-'a']++;
    for(int i=0;i<s2.length();i++)c[s2[i]-'a']++;
    for(int i=0;i<26;i++)if(b[i])m1=min(a[i]/b[i],m1);
    for(int i=0;i<=m1;i++){
      for(int j=0;j<26;j++){
        if(c[j])m2=min(m2,(a[j]-b[j]*i)/c[j]);
      }
        if(i+m2>m+n)m=i,n=m2;
    }
     for(int i=0;i<m;i++)cout<<s1;
    for(int i=0;i<n;i++)cout<<s2;
    for(int i=0;i<26;i++)if(a[i]-b[i]*m-c[i]*n>0)cout<<(char)(i+'a'),a[i]--,i--;
    return 0;
}