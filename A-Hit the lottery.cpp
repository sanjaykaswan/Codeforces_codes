#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    int ans;
    ans = 0;
    cin >> n;
    while (n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            ans += 1;
        }
        else if (n >= 20)
        {
            n -= 20;
            ans += 1;
        }
        else if (n >= 10)
        {
            n -= 10;
            ans += 1;
        }
        else if (n >= 5)
        {
            n -= 5;
            ans += 1;
        }
        else
        {
            n -= 1;
            ans += 1;
        }
    }
    cout<< ans;
    return 0;
}