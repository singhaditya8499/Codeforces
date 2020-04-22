#include <iostream>  
#include <stdio.h>  
#include <cstring>  
using namespace std;  
long a[4];  
string s;  
int fun1 (int x)   
{  
    for (int i = 0; i < 4; i++)  
    {  
        if (i == x)  
            continue;  
                  if (a[i] * 2 > a[x])  
        {  
            return 0;  
        }  
    }  
    return 1;  
}  
  int fun2(int x)  
{  
    for (int i = 0; i < 4; i++)  
    {  
        if (i == x)  
        {  
            continue;  
        }  
                  if (a[i] < a[x] * 2)  
        {  
            return 0;  
        }  
    }  
    return 1;  
}  
int main ()  
{  
    int n=0, ans=0;  
    for (int i = 0; i < 4; i++)  
    {  
        cin>>s;  
        a[i] =s.size()-2;  
    }  
    for (int i = 0; i < 4; i++)  
    {  
        if (fun1(i) || fun2(i))  
        {  
            n++;  
            ans = i;  
        }  
    }  
    if (n==1)  
    {  
        cout<<char(ans+'A')<<endl;  
    }  
    else  
    {  
        cout<<"C"<<endl;  
    }  
    return 0;  
}  