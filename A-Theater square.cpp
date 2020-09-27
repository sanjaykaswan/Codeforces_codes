#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a, b, l = 0, w = 0;
    cin >> a >> b >> n;
    if (a % n == 0)
    {
        l += a / n;
    }
    else
    {
        l += ((a / n) + 1);
    }
    if (b % n == 0)
    {
        w += b / n;
    }
    else
    {
        w += ((b / n) + 1);
    }
    cout << l * w;
    return 0;
}