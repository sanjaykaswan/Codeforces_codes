#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, a = 1, b = 1, c = 2;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << " " << 0 << " " << 0;
    }
    else if (n == 1)
    {
        cout << 0 << " " << 0 << " " << 1;
    }

    else
    {
        for (int i = 0; i < 1000000000; i++)
        {
            if (c == n)
            {
                cout << 0 << " " << a << " " << b;
                break;
            }
            else
            {
                a = b;
                b = c;
                c = a + b;
            }
        }
    }
    return 0;
}