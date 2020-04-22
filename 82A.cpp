#include <iostream>
using namespace std;
 int main()
{
    long long n, k = 1, s = 0;
    cin >> n;
    while(s + 5 * k < n) 
    {
        s += 5 * k;
        k *= 2;
    }
     if (s + k < n) s += k;
    else 
    {
        cout << "Sheldon\n";
        return 0;
    }
    if (s + k < n) s += k;
    else
    {
        cout << "Leonard\n";
        return 0;
    }
     if (s + k < n) s +=k;
    else 
    {
        cout << "Penny\n";
        return 0;
    }
     if (s + k < n) 
    {
        cout << "Howard\n";
        return 0;
    }
    else 
    {
        cout << "Rajesh\n";
        return 0;
    }
}