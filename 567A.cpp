#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int n;
 cin>>n;
 long long int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 //sort(a,a+n);
 cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
 for(int i=1;i<n-1;i++)
 {
  //cout<<i<<".";
  cout<<min(abs(a[i]-a[i-1]),abs(a[i+1]-a[i]))<<" "<<max(a[i]-a[0],a[n-1]-a[i])<<endl;
 }
 cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
 return 0;
}