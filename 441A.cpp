#include <stdio.h>
 #define N 50
#define MIN 10000
#define MAX 1000000
  typedef struct seller_s {
            int nitem;
            int price[N];
            int can_buy;
            } seller_t;
 int main ()
{
    int n, v;
    seller_t seller[N];
    int i, j, dealers;
        scanf("%d", &n);
    do
        scanf("%d", &v);
    while(v<MIN||v>MAX);
        for(i=0; i<n; i++){
        scanf("%d", &seller[i].nitem);
        for(j=0; j<seller[i].nitem; j++)
            do
                scanf("%d", &seller[i].price[j]);
            while(seller[i].price[j]<MIN || seller[i].price[j]>MAX);
                seller[i].can_buy=0;
    }
            for(i=0, dealers=0; i<n; i++){
                for(j=0; j<seller[i].nitem; j++)
            if(seller[i].price[j]<v)
                seller[i].can_buy=1;
                        if(seller[i].can_buy==1)
            dealers++;
    }
        printf("%d\n", dealers);
        for(i=0; i<n; i++)
        if(seller[i].can_buy==1)
            printf("%d ", i+1);
        printf("\n");
    return 0;
}