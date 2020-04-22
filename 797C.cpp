#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <stack>
#define LL long long
#define mid ((l + r) >> 1)
using namespace std;
char strf[100005],strt[100005];
int cnt[26];
stack <int> S;
int main()
{
 //freopen("1.in","r",stdin);
 //freopen("1.out","w",stdout);
 scanf("%s", strf);
 memset(cnt, 0, sizeof(cnt));
 int len = strlen(strf);
 for(int i = 0; i < len; i++)
  cnt[strf[i] - 'a']++;
 int pnf = 0, pnt = 0;
 for(int i = 0; i < 26; i++)
 {
  if(pnt == len) break;
  if(cnt[i] == len)
        {
            printf("%s\n",strf);
            return 0;
        }
  while((!S.empty()) && S.top() <= i + 'a')
        {
            strt[pnt++] = S.top();
            S.pop();
        }
        while(cnt[i] > 0)
        {
            if(strf[pnf] - 'a' == i)
            {
                strt[pnt++] = strf[pnf];
                pnf++;
                cnt[i]--;
                continue;
            }
            else
            {
                S.push(strf[pnf]);
                cnt[strf[pnf] - 'a']--;
                pnf++;
            }
        }
    }
 while(!S.empty())
 {
  strt[pnt++] = S.top();
  S.pop();
 }
 for(int i = 0; i < len; i++)
  printf("%c",strt[i]);
    printf("\n");
 return 0;
}