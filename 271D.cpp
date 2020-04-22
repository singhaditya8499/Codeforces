#include "bits/stdc++.h"
 using namespace std;
 #define sd(x) scanf("%d", &x)
#define boost ios_base::sync_with_stdio(false);
#define mp make_pair
#define pb push_back
#define ll long long
#define f first
#define s second
 typedef pair<int, int> pii;
 const int mod = 1000000007;
const int inf = 50000000;
const int maxn = 100010;
 struct node{
    int wend;
    node* arr[26];
};
 char str[maxn], good[26];
int ans;
 node* getnode()
{
    node* ret = (node*)(malloc(sizeof(node)));
    for(int i=0; i<26; i++)
        ret->arr[i] = NULL;
    ret->wend = 0;
}
 void insert(string temp, node* root)
{
    int i, ind;
    node* crawler = root;
    for(i=temp.size()-1; i>=0; i--){
        ind = temp[i]-'a';
        if(!crawler->arr[ind])
            crawler->arr[ind] = new node();
        crawler = crawler->arr[ind];
    }
}
 void mark(string temp, node* root)
{
    int i, ind;
    node* crawler = root;
    for(i=0; i<temp.size(); i++){
        ind = temp[i]-'a';
        crawler = crawler->arr[ind];
        if(!crawler->wend){
            crawler->wend = 1;
            //cout<<temp.substr(0,i+1)<<" ";
            ans++;
        }
    }
}
 int main()
{
    //freopen("i.txt", "r", stdin);
    //freopen("o.txt", "w", stdout);
    int i, j, k, f, n;
    string temp = "";
    scanf("%s%s%d", str, good, &k);
    n = strlen(str);
    node* root = new node();
    for(i=n-1; i>=0; i--){
        temp+=str[i];
        insert(temp, root);
    }
    for(i=0; i<n; i++){
        temp = "";
        f = 0;
        for(j=i; j<n; j++){
            if(good[str[j]-'a']=='0')
                f++;
            if(f>k)
                break;  
            temp+=str[j];
        }
        mark(temp, root);
        //cout<<i<<" "<<j<<" "<<temp<<" "<<ans<<"\n";
    }
    printf("%d\n", ans);
    return 0;
}