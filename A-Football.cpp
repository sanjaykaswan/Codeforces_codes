#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, as = 1, bs = 0;
    string s, a, b;
    cin>>n;
    cin >> a;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> s;
        if (s == a)
        {
            as += 1;
        }
        else
        {
            b = s;
            bs += 1;
        }
    }
    if (as > bs)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }

    return 0;
}