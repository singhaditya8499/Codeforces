#include<bits/stdc++.h>
using namespace std;
int main()
{
 // string s;
 // while(getline(cin,s))
 // {
 //  if(s[0]=='0')
 //   break;
 //  vector<string> v;
 //  for(int i=0;i<s.length();i++)
 //  {
 //   string tmp;
 //   int j=i;
 //   if(isalpha(s[i]))
 //   {
 //    while(j<s.length()&&isalpha(s[j]))
 //    {
 //     tmp+=s[j];
 //     j++;
 //    }
 //    i=j-1;
 //    v.push_back(tmp);
 //    cout<<tmp;
 //   }
 //   else if(isdigit(s[i]))
 //   {
 //    j=i;
 //    int num=0;
 //    while(j<s.length()&&isdigit(s[j]))
 //    {
 //     num=num*10+(s[j]-'0');
 //     j++;
 //    }
 //    i=j-1;
 //    cout<<v[v.size(num];
 //   }
 //   else
 //   {
 //    cout<<s[i];
 //   }
  //  }
 //  cout<<endl;
 // }
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 int cnt=0;
 for(int i=1;i<n-1;i++)
 {
  if(arr[i]==0&&arr[i+1]==1&&arr[i-1]==1)
  {
   cnt++;
   arr[i+1]=0;
  }
 }
 cout<<cnt<<"\n";
}