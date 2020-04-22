#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void generate(string s,vector<int>&gen,int len)
{
    if(len==7)
        return;
    int x;
    stringstream geek(s+'0');
    geek>>x;
    gen.push_back(x);
    generate(s+'0',gen,len+1);
    stringstream geek1(s+'1');
    geek1>>x;
    gen.push_back(x);
    generate(s+'1',gen,len+1);
 }
int main()
{
    int n;
    cin>>n; 
    vector<int> gen;
    string s="";
    generate(s,gen,0);
    sort(gen.begin(),gen.end());
    vector<int>::iterator it;
    it=unique(gen.begin(),gen.end());
    gen.resize(it-gen.begin());
    int ans[1000002];
    int minn[1000002];
    for(int i=0;i<=1000000;i++)
        ans[i]=1000009;
    ans[0]=0;
    for(int i=1;i<=1000000;i++)
    {
        for(int j=1;j<gen.size();j++)
        {
            if(gen[j]>i)
                break;
            else
            {
                if(ans[i]>(1+ans[i-gen[j]]))
                {
                    ans[i]=1+ans[i-gen[j]];
                    minn[i]=gen[j];
                }
            }
        }
    }
    cout<<ans[n]<<"\n";
    while(n!=0)
    {
        cout<<minn[n]<<" ";
        n=n-minn[n];
    }
}