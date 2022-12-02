#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

unsigned long long fibo(int n)
{
    unsigned long long a = 0, b = 1, c, i;
    if (n == 1) return a;
    if (n == 2) return b;
    for (i = 3; i <= n; i++)
    {
        // calculate c which is the i-th fibonacci number
        c = a + b;
        // assign value of b to a
        a = b;
        // assign value of c to b
        b = c;
    }
    return b;
}
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i + 1);
        if (i < n) cout << ' ';
    }
    return 0;
}