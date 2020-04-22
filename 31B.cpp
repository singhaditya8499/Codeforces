#include <bits/stdc++.h>
 using namespace std;
const int maxn = 205;
 char str[maxn];
 int main()
{
    while(~scanf("%s",str))
    {
        int len=strlen(str);
         int num=0;
        for(int i=0;i<len;i++){
            if(str[i]=='@'){
                num++;
            }
        }
        if(num==0){
            puts("No solution");
            continue;
        }
         if(str[0]=='@'||str[len-1]=='@'){
            puts("No solution");
            continue;
        }
        int flag=1;
        int init=-1;
        for(int i=0;i<len;i++){
            if(str[i]=='@'){
                if(init==-1){
                    init=i;
                    continue;
                }
                if(i-init<=2){
                    flag=0;
                    break;
                }
                init=i;
            }
        }
        int tmp=0;
        if(!flag){
            puts("No solution");
            continue;
        }
        else
        {
            for(int i=0;i<len;i++){
                if(tmp&&str[i+1]=='@'){
                    printf(",");
                }
                printf("%c",str[i]);
                if(str[i]=='@'){
                    tmp=1;
                }
            }
        }
        puts("");
    }
     return 0;
}