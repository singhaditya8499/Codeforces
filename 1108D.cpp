#include<bits/stdc++.h>
 using namespace std;
 int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    vector<pair<char,int> > v;
    for(int i=0;i<s.length();i++)
    {
        int j=i;
        int cnt=0;
        while(j<n&&s[i]==s[j])
        {
            j++;
            cnt++;
        }
        i=j-1;
        ans+=(cnt/2);
        v.push_back(make_pair(s[i],cnt));
    }
    string ss="";
    for(int i=0;i<v.size();i++)
    {
        if(i==(v.size()-1))
        {
            for(int j=0;j<v[i].second;j++)
            {
                if(j%2==0)
                ss+=v[i].first;
                else
                {
                    if(v[i].first=='R')
                    {
                        ss+='B';
                    }
                    if(v[i].first=='B')
                    {
                        ss+='R';
                    }
                    if(v[i].first=='G')
                    {
                        ss+='B';
                    }
                }
            }
        }
        else
        {
            int a=30;
            switch(v[i].first)
            {
                case 'R':
                    a/=2;
                    break;
                case 'B':
                    a/=3;
                    break;
                case 'G':
                    a/=5;
                    break;
                default :
                    break;
            }
            switch (v[i+1].first)
            {
            case 'R':
                a/=2;
                break;
            case 'B':
                a/=3;
                break;
            case 'G':
                a/=5;
                break;
            default :
                break;
            }
            char p;
            if(a==2)
            p='R';
            if(a==3)
            p='B';
            if(a==5)
            p='G';
            for(int j=0;j<v[i].second;j++)
            {
                if(j%2==0)
                ss+=v[i].first;
                else
                {
                    ss+=p;
                }
            }
        }
    }
    cout<<ans<<"\n";
    cout<<ss<<"\n";
}