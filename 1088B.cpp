#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    set<int> s;
    s.insert(0);
    while (n--)
    {
        int a;
        scanf("%d",&a);
        s.insert(a);
    }
    auto it=s.begin();
    for (int i=0;i<m;i++)
    {
        if (next(it)==s.end())
        printf("0\n");
        else
        {
            printf("%d\n",*next(it)-*it);
            it=next(it);
        }
    }
}