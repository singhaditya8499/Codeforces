#include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int t, i, n, j;
    string s, s1, s2, s3;
    scanf("%d", &t);
    //while(t--){
        cin >> s;
        n = s.size();
        s1="";
        for(i=0; i<n/2; i++){
            if(s[i]!=s[n-1-i])
                break;
            s1+=s[i];
        }
        if(i>=(n/2)){
            s1+=s[i];
            for(j=i; j<n; j++)
                s1+=s[j];
            cout << s1 << endl;
            return 0;
        }
        bool p1, p2;
        p1=p2=true;
        for(j=i+1; j<=n/2; j++){
            if(s[j]!=s[n-j]){
                p1=false;
                break;
            }
        }
        if(p1){
            s2="";
            for(j=0; j<n-i; j++)
                s2+=s[j];
            s2+=s[i];
            for(; j<n; j++)
                s2+=s[j];
            cout << s2 << endl;
            return 0;
        }
        for(j=i; j<=n/2; j++){
            if(s[j]!=s[n-j-2]){
                p2=false;
                break;
            }
        }
        if(p2){
            for(j=0; j<i; j++)
                s2+=s[j];
            s2+=s[n-i-1];
            for(j=i; j<n; j++)
                s2+=s[j];
            cout << s2 << endl;
            return 0;
        }
        cout << "NA\n";
    //}
    return 0;
}