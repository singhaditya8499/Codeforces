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
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first>b.first)
        return true;
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    set<int> row,col;
    for(int i=1;i<=n*n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(row.find(x)==row.end()&&col.find(y)==col.end())
        {
            cout<<i<<" ";
            row.insert(x);
            col.insert(y);
        }
    }
}