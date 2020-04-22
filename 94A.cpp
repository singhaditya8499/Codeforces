#include<bits/stdc++.h>
using namespace std;
int main() {
string s1,s2[10];
cin>>s1;
for(int i=0;i<10;i++)
{
 cin>>s2[i];
}
for (int i=0; i<8; i++)
    {
        string s3 =s1.substr(i*10,10);
        for(int j =0;j<10;j++)
        {
         if(s3==s2[j]){
          cout<<j;
         }
        }
    }
return 0;
}